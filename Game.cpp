#include <iostream>

using namespace std;

int board[4][4]; 
int directionLine[] = {1, 0, -1, 0};
int directionCol[] = {0, 1, 0, -1};

void newGame(){
    for(int i =0; i < 4; i++)
        for(int j =0; j < 4; j++)
            board[i][j] = 0; 
}

void printUI (){
    for (int i = 0; i < 4; i++){
        for (int j =0; j < 4; j++)
            if (board [i][j] == 0)
                cout << " ";
            else 
                cout << board[i][j];
        cout << "\n"; 
    }
}

int main()
{
    while (true){
        char command;
        printUI;
        cin >> command; 

    }
    return 0;

}