#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
// char board [3][3]={{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
// void drawBoard(){
//     cout<<" "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<endl;
//     cout<<"----------\n";
//     cout<<" "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<endl;
//     cout<<"----------\n";
//     cout<<" "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<endl;
   
// }
int slot;
char mark1;
char board[9]={'0','1','2','3','4','5','6','7','8'};
char current_marker;
int current_player;

void drawBoard(){
    cout<<" "<<board[0]<<" | "<<board[1]<<" | "<<board[2]<<endl;
    cout<<"----------\n";
    cout<<" "<<board[3]<<" | "<<board[4]<<" | "<<board[5]<<endl;
    cout<<"----------\n";
    cout<<" "<<board[6]<<" | "<<board[7]<<" | "<<board[8]<<endl;
}

int winner()
{
    //  for (int i = 0; i < 9; i++)
    // {
        if (board[0]==board[3] && board[3]==board[6])           
        {
            return current_player;
        }
        if (board[1]==board[4] && board[4]==board[7])           
        {
            return current_player;
        }
        if (board[2]==board[5] && board[5]==board[8])           
        {
            return current_player;
        }
    
        if (board[0]==board[1] && board[1]==board[2])           
        {
            return current_player;
        }
        if (board[3]==board[4] && board[4]==board[5])           
        {
            return current_player;
        }
        if (board[6]==board[7] && board[7]==board[8])           
        {
            return current_player;
        }
        if (board[0]==board[4] && board[4]==board[8])           
        {
            return current_player;
        }
        if (board[2]==board[4] && board[4]==board[6])           
        {
            return current_player;
        }
        else
            return 0;
}
void swap(){
    if(current_marker == 'X') current_marker = 'O';
    else  current_marker = 'X';

    if(current_player == 1) current_player = 2;
    else  current_player = 1;
}
void game()
{
    int player_won=0;
    cout<<"\n player 1, choose your mark (X/O) \n";
    cin>>mark1;
    current_player = 1;
    current_marker = mark1;
    drawBoard();

    for (int i = 0; i < 9; i++)
    {
        cout<<"\n its player "<<current_player<<" 's turn ,Enter your slot : ";
        cin>>slot;
        if (slot < 0 || slot > 8)
        {
           cout<<"\n this slot is occupied , please try another";
           i--;
           continue;
        }
        
        if (board[slot] != 'X'&& board[slot] != 'O')
        {
             board[slot] = current_marker;
        }
        else
        {
            cout<<"\n this slot is occupied , please try another";
            i--;
            continue;
        }
        
       
        // drawBoard();
        player_won = winner();
        cout<<endl;
        if (player_won == 1) {cout<<"congoo! player 1 won the match"; break;}
        if (player_won == 2) {cout<<"congoo! player 2 won the match"; break;}
        
        swap();
        drawBoard();
    }

    if (player_won == 0) cout<<"Oops game tied";
    
}
int main()
{
    game();
    // srand(time(NULL));       // seed the random fun to generate different value
    // cout<< (rand() % (8) + 1);      //generates random value
    // [U,L]  (rand() % (U-L+1) + L)
    return 0;
}