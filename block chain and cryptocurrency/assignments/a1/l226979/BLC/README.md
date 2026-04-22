# Arshah Lamees Blockchain (Go + React)

This project is a simple educational blockchain implementation in **Go** with a minimal **React** UI.

## Features
- Block structure includes: Index, Timestamp, Transactions, MerkleRoot, PrevHash, Hash, Nonce
- Genesis block
- Merkle Tree (MerkleRoot stored per block)
- Proof of Work mining (Difficulty-based leading zeros)
- REST API for:
  - View blockchain: `GET /chain`
  - Add transaction to pending list: `POST /addtx`
  - Mine pending transactions into a new block: `GET /mine`
- React UI:
  - Add transaction
  - Mine pending transactions
  - View blockchain

---

## Project Structure

```

BLC/
├── arshah-blc-go/        # Go blockchain backend (API)
│   ├── go.mod
│   └── main.go
└── arshah-blc-ui/        # React frontend (Vite)
├── package.json
└── src/
├── App.jsx
└── App.css

````

---

## Requirements

### Backend (Go)
- Go installed (v1.20+ recommended)

### Frontend (React)
- Node.js installed (v18+ recommended)
- npm (comes with Node)

---

# Run on Ubuntu / Linux

## 1) Start the Go Backend
Open Terminal:

```bash
cd ~/Desktop/BLC/arshah-blc-go
go run main.go
````

Expected output:

* Server running on `http://localhost:8080`

## 2) Start the React UI

Open another Terminal:

```bash
cd ~/Desktop/BLC/arshah-blc-ui
npm install
npm run dev
```

Open in browser:

* `http://localhost:5173`

---

# Run on Windows 11

## 0) Install prerequisites

* Install **Go**: [https://go.dev/dl/](https://go.dev/dl/)
* Install **Node.js (LTS)**: [https://nodejs.org/](https://nodejs.org/)

Restart terminal after installing.

## 1) Start the Go Backend (PowerShell)

Open PowerShell:

```powershell
cd "C:\Path\To\BLC\arshah-blc-go"
go run main.go
```

Server will run at:

* `http://localhost:8080`

## 2) Start the React UI (PowerShell)

Open another PowerShell window:

```powershell
cd "C:\Path\To\BLC\arshah-blc-ui"
npm install
npm run dev
```

Open:

* `http://localhost:5173`

---

# API Usage (Optional Testing)

### View blockchain

```bash
curl http://localhost:8080/chain
```

### Add transaction (pending)

```bash
curl -X POST http://localhost:8080/addtx ^
  -H "Content-Type: application/json" ^
  -d "{\"tx\":\"Test transaction 1\"}"
```

### Mine pending transactions

```bash
curl http://localhost:8080/mine
```

---

# Notes / Common Issues

## 1) CORS issue (React buttons do nothing)

The Go backend must allow CORS. Our backend includes a CORS wrapper so React (5173) can call Go (8080).

If you ever re-check:

* Ensure backend sets these headers:

  * `Access-Control-Allow-Origin: *`
  * `Access-Control-Allow-Headers: Content-Type`
  * `Access-Control-Allow-Methods: GET, POST, OPTIONS`

## 2) Endpoint naming

We used:

* `/addtx` (all lowercase)

So React calls:

* `fetch("http://localhost:8080/addtx", ...)`

If you change the route name, update React too.

## 3) Ports already in use

If port 8080 or 5173 is busy:

* Stop existing process (Ctrl+C)
* Or change ports:

  * Go: `ListenAndServe(":8080", ...)` → `:8081`
  * React: Vite will auto-pick another port

---

# Deliverables

* Source Code: `arshah-blc-go/` + `arshah-blc-ui/`
* Demo:

  1. Run backend
  2. Run frontend
  3. Add transaction → Mine block → Load blockchain
* Report: include screenshots of UI, API responses, and code highlights
