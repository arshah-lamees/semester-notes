#include <iostream>

using namespace std;

int main()
{
    cout<<"THIS IS A DICE GAME"<<endl;
    //////////////////////////////////
    int p1;
    int p2;
    int player1;
    int player2;
    int pos1 = -1;
    int pos2 = -2;
    
    // the dice 
    int dice;
    while(p1!=6 && p2!=6)
    {
        //starting condition for dices
        player1 =  (rand()%6) +1;
        if(player1 == 6)
        {
            p1 = player1;
            
        }
        
        player2 =  rand()%6 +1;
        if(player2 == 6)
        {
            p2 =player2;
        }
    }
    
    //initializing the positins after the first 6.
    pos1 = pos1 + 6;
    pos2 = pos2 + 6;
    
    // they will only come out of this loop if and only if they both become 6 atleast once
    
    //-----------------------------------------//
    
   while(pos1<=56 || pos2<= 56)
    {
        
        
        // i have used goto statement to reexeceute the code when any 6 comes
        // goto statement taken from W3SCHOOLS. unconditional jumping.
        //player1 turn 
     turn1:     dice = rand()%6 +1;
        cout<<"player 1 rolled "<< dice<<endl;
        if(dice == 6)
        {
            pos1= pos1+ dice;
            goto turn1;
        }
        else
        {
            pos1 = pos1+ dice;
        }
       
        cout<<"player 1 Score" << pos1<<endl<<endl;
        
        
        /////////////////////////////////////////////
        //players two turn 
        
      turn2:     dice = rand()%6 +1;
        cout<<"player 2 rolled "<< dice<<endl;
        if(dice == 6)
        {
            pos2= pos2+ dice;
            goto turn2;
        }
        else
        {
            pos2 = pos2+ dice;
        }
       
        cout<<"player 2 Score" << pos2<<endl<<endl;
        
        
    }
    
    if(pos1>=56)
    {
        cout<<"player 1 won"<<endl;
    }
    else
    {
        cout<<"player 2 won"<<endl;
    }
    
    return 0;
}
