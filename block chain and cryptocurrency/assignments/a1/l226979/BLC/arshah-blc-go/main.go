

package main

import (
	"crypto/sha256"
	"encoding/hex"
	"encoding/json"
	"fmt"
	"net/http"
	"strings"
	"time"
)

type Block struct {
	Index        int
	Timestamp    string
	Transactions []string
	MerkleRoot   string
	PrevHash     string
	Hash         string
	Nonce        int
}

var PendingTxs []string
var Blockchain []Block

const Difficulty = 4 // number of leading zeros required

func hashString(s string) string {
	h := sha256.Sum256([]byte(s))
	return hex.EncodeToString(h[:])
}

func addTransaction(w http.ResponseWriter, r *http.Request) {

	if r.Method != http.MethodPost {
		http.Error(w, "Only POST allowed", http.StatusMethodNotAllowed)
		return
	}

	type Req struct {
		Tx string `json:"tx"`
	}

	var req Req

	if err := json.NewDecoder(r.Body).Decode(&req); err != nil {
		http.Error(w, "Invalid JSON", http.StatusBadRequest)
		return
	}

	tx := strings.TrimSpace(req.Tx)

	if tx == "" {
		http.Error(w, "tx cannot be empty", http.StatusBadRequest)
		return
	}

	PendingTxs = append(PendingTxs, tx)

	json.NewEncoder(w).Encode(map[string]any{
		"message":       "Transaction added to pending list",
		"pending_count": len(PendingTxs),
		"pending_txs":   PendingTxs,
	})
}

func minePending(w http.ResponseWriter, r *http.Request) {

	if len(PendingTxs) == 0 {
		http.Error(w, "No pending transactions to mine", http.StatusBadRequest)
		return
	}

	prevBlock := Blockchain[len(Blockchain)-1]

	newBlock := createNewBlock(prevBlock, PendingTxs)

	Blockchain = append(Blockchain, newBlock)

	// clear pending transactions
	PendingTxs = []string{}

	json.NewEncoder(w).Encode(map[string]any{
		"message": "Block mined successfully",
		"index":   newBlock.Index,
		"hash":    newBlock.Hash,
	})
}

func buildMerkleRoot(transactions []string) string {

	if len(transactions) == 0 {
		return hashString("")
	}

	var level []string

	for _, tx := range transactions {
		level = append(level, hashString(tx))
	}

	for len(level) > 1 {

		// if odd duplicate last
		if len(level)%2 == 1 {
			level = append(level, level[len(level)-1])
		}

		var next []string

		for i := 0; i < len(level); i += 2 {
			next = append(next, hashString(level[i]+level[i+1]))
		}

		level = next
	}

	return level[0]
}

func calculateHash(block Block) string {

	record := fmt.Sprintf("%d%s%s%s%d",
		block.Index,
		block.Timestamp,
		block.MerkleRoot,
		block.PrevHash,
		block.Nonce)

	return hashString(record)
}

// Proof of Work Mining
func mineBlock(block *Block) {

	targetPrefix := strings.Repeat("0", Difficulty)

	for {

		block.Hash = calculateHash(*block)

		if strings.HasPrefix(block.Hash, targetPrefix) {
			return
		}

		block.Nonce++
	}
}

func createGenesisBlock(blockchainName string) Block {

	txs := []string{"Genesis Block - " + blockchainName}

	root := buildMerkleRoot(txs)

	genesis := Block{
		Index:        0,
		Timestamp:    time.Now().String(),
		Transactions: txs,
		MerkleRoot:   root,
		PrevHash:     "0",
		Hash:         "",
		Nonce:        0,
	}

	mineBlock(&genesis)

	return genesis
}

func createNewBlock(prevBlock Block, txs []string) Block {

	root := buildMerkleRoot(txs)

	newBlock := Block{
		Index:        prevBlock.Index + 1,
		Timestamp:    time.Now().String(),
		Transactions: txs,
		MerkleRoot:   root,
		PrevHash:     prevBlock.Hash,
		Hash:         "",
		Nonce:        0,
	}

	mineBlock(&newBlock)

	return newBlock
}

// View Blockchain
func getBlockchain(w http.ResponseWriter, r *http.Request) {
	json.NewEncoder(w).Encode(Blockchain)
}

// SEARCH API
func searchHandler(w http.ResponseWriter, r *http.Request) {

	query := r.URL.Query().Get("q")

	if query == "" {
		json.NewEncoder(w).Encode(map[string]any{
			"found": false,
			"error": "empty query",
		})
		return
	}

	for _, block := range Blockchain {

		for _, tx := range block.Transactions {

			if tx == query {

				json.NewEncoder(w).Encode(map[string]any{
					"found": true,
					"index": block.Index,
					"hash":  block.Hash,
				})

				return
			}
		}
	}

	json.NewEncoder(w).Encode(map[string]any{
		"found": false,
	})
}

func main() {

	blockchainName := "Arshah Lamees"

	// Genesis Block
	genesis := createGenesisBlock(blockchainName)
	Blockchain = append(Blockchain, genesis)

	// First Block
	block1 := createNewBlock(Blockchain[len(Blockchain)-1], []string{"l22-6979"})
	Blockchain = append(Blockchain, block1)

	http.HandleFunc("/", func(w http.ResponseWriter, r *http.Request) {
		w.Write([]byte("Arshah Lamees Blockchain API Running"))
	})

	http.HandleFunc("/chain", getBlockchain)
	http.HandleFunc("/addtx", addTransaction)
	http.HandleFunc("/mine", minePending)

	// NEW SEARCH ROUTE
	http.HandleFunc("/search", searchHandler)

	// Enable CORS
	handler := http.HandlerFunc(func(w http.ResponseWriter, r *http.Request) {

		w.Header().Set("Access-Control-Allow-Origin", "*")
		w.Header().Set("Access-Control-Allow-Headers", "Content-Type")
		w.Header().Set("Access-Control-Allow-Methods", "GET, POST, OPTIONS")

		if r.Method == "OPTIONS" {
			return
		}

		http.DefaultServeMux.ServeHTTP(w, r)
	})

	fmt.Println("Server running on http://localhost:8080")

	http.ListenAndServe(":8080", handler)
}