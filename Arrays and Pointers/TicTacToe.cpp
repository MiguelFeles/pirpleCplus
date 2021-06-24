#include <iostream>
#include <stdio.h>

using namespace std;

char board[3][3] = 
    { {'1','2','3'},
     {'4','5','6'},
     {'7','8','9'},};

void make_board(int a, char mark)
{
    switch (a)
        {
        case 1 : {if ((board[0][0] == 'X') || (board[0][0] == 'O')) {cout << "That square is not available. please select another." << endl; break;} else {board[0][0] = mark; break;}}
        case 2 : {if ((board[0][1] == 'X') || (board[0][0] == 'O')) {cout << "That square is not available. please select another." << endl; break;} else {board[0][1] = mark; break;}}
        case 3 : {if ((board[0][2] == 'X') || (board[0][0] == 'O')) {cout << "That square is not available. please select another." << endl; break;} else {board[0][2] = mark; break;}} // }NO SE PUEDE USAR MAK
        case 4 : {if ((board[1][0] == 'X') || (board[0][0] == 'O')) {cout << "That square is not available. please select another." << endl; break;} else {board[1][0] = mark; break;}}
        case 5 : {if ((board[1][1] == 'X') || (board[0][0] == 'O')) {cout << "That square is not available. please select another." << endl; break;} else {board[1][1] = mark; break;}}
        case 6 : {if ((board[1][2] == 'X') || (board[0][0] == 'O')) {cout << "That square is not available. please select another." << endl; break;} else {board[1][2] = mark; break;}}
        case 7 : {if ((board[2][0] == 'X') || (board[0][0] == 'O')) {cout << "That square is not available. please select another." << endl; break;} else {board[2][0] = mark; break;}}
        case 8 : {if ((board[2][1] == 'X') || (board[0][0] == 'O')) {cout << "That square is not available. please select another." << endl; break;} else {board[2][1] = mark; break;}}
        case 9 : {if ((board[2][2] == 'X') || (board[0][0] == 'O')) {cout << "That square is not available. please select another." << endl; break;} else {board[2][2] = mark; break;}}
        default : cout << "Not a valid choice, please try again" << endl; 
        }
        
    cout << "Current board state:" << endl;
     for(int y = 0; y<3 ; y++)
     {           
        cout << "" << endl;
        for(int x = 0; x<3 ; x++)
        {
            cout << board[y][x];
            if (x <2 )cout << "|";
        }
        cout << "" << endl;
        cout << "" << endl;
        cout << "-+-+-" << endl;
     }
}

int main()
{
    const char PLAYER_O = 'O';
    const char PLAYER_X = 'X';
    int chosenSquare = 0;

    char current_player = PLAYER_O;
    char last_player = PLAYER_X;

    make_board(0, 0);

    for (int i = 0; i<18; i++)
    {
    swap(current_player, last_player);
    cout << "Player " << current_player << ", enter a number between 1 and 9: " << endl;
    cin >> chosenSquare;
    switch (chosenSquare)
        {
        case 1 : make_board(1, current_player); break;
        case 2 : make_board(2, current_player); break;
        case 3 : make_board(3, current_player); break;
        case 4 : make_board(4, current_player); break;
        case 5 : make_board(5, current_player); break;
        case 6 : make_board(6, current_player); break;
        case 7 : make_board(7, current_player); break;
        case 8 : make_board(8, current_player); break;
        case 9 : make_board(9, current_player); break;
        default : cout << "Not a valid choice, please try again" << endl; 
        }
        

        if (board[0][0]== 'O' && board[0][1] == 'O' && board[0][2] == 'O'){cout << "\nPlayer O wins on the top row!\n \n" << endl; break;}
        if (board[1][0]== 'O' && board[1][1] == 'O' && board[1][2] == 'O'){cout << "\nPlayer O wins in the middle row!\n \n" << endl; break;}
        if (board[2][0]== 'O' && board[2][1] == 'O' && board[2][2] == 'O'){cout << "\nPlayer O wins on the bottom row!\n \n" << endl; break;}
        if (board[0][0]== 'O' && board[1][0] == 'O' && board[2][0] == 'O'){cout << "\nPlayer O wins in the left row! \n \n" << endl; break;}
        if (board[0][1]== 'O' && board[1][1] == 'O' && board[2][1] == 'O'){cout << "\nPlayer O wins in the middle row! \n \n" << endl; break;}
        if (board[0][2]== 'O' && board[1][2] == 'O' && board[2][2] == 'O'){cout << "\nPlayer O wins in the right row! \n \n" << endl; break;}
        if (board[0][0]== 'O' && board[1][1] == 'O' && board[2][2] == 'O'){cout << "\nPlayer O wins on the downward diagonal! \n \n" << endl; break;}
        if (board[2][0]== 'O' && board[1][1] == 'O' && board[0][2] == 'O'){cout << "\nPlayer O wins on the upward diagonal! \n \n" << endl; break;}

        if (board[0][0]== 'X' && board[0][1] == 'X' && board[0][2] == 'X'){cout << "\nPlayer X wins on the top row!\n \n" << endl; break;}
        if (board[1][0]== 'X' && board[1][1] == 'X' && board[1][2] == 'X'){cout << "\nPlayer X wins in the middle row!\n \n" << endl; break;}
        if (board[2][0]== 'X' && board[2][1] == 'X' && board[2][2] == 'X'){cout << "\nPlayer X wins on the bottom row!\n \n" << endl; break;}
        if (board[0][0]== 'X' && board[1][0] == 'X' && board[2][0] == 'X'){cout << "\nPlayer X wins in the left row! \n \n" << endl; break;}
        if (board[0][1]== 'X' && board[1][1] == 'X' && board[2][1] == 'X'){cout << "\nPlayer X wins in the middle row! \n \n" << endl; break;}
        if (board[0][2]== 'X' && board[1][2] == 'X' && board[2][2] == 'X'){cout << "\nPlayer X wins in the right row! \n \n" << endl; break;}
        if (board[0][0]== 'X' && board[1][1] == 'X' && board[2][2] == 'X'){cout << "\nPlayer O wins on the downward diagonal! \n \n" << endl; break;}
        if (board[2][0]== 'X' && board[1][1] == 'X' && board[0][2] == 'X'){cout << "\nPlayer O wins on the upward diagonal! \n \n" << endl; break;}

        if (i == 17) {cout << "Draw. Nobody Wins." << endl; break;}

    }
  
    return 0; 
 
} 