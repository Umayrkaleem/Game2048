#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int board[4][4]; 
int directionLine[] = {1, 0, -1, 0};
int directionCol[] = {0, 1, 0, -1};

pair<int , int> generateUnoccupiedPosition(){
    int occupied = 1, line, column; 
    while (occupied) {
        line = rand() % 4; 
        column = rand() % 4; 
        if (board[line][column] ==0)
            occupied = 0;
    }
    return make_pair(line, column);
}

void newGame(){
    for(int i =0; i < 4; i++)
        for(int j =0; j < 4; j++)
            board[i][j] = 0; 
    pair<int, int> pos = generateUnoccupiedPosition();
    board[pos.first][pos.second] = 2;
}

void printUI(){
    for (int i = 0; i < 4; i++){
        for (int j =0; j < 4; j++)
            if (board [i][j] == 0)
                cout << ".";
            else 
                cout << board[i][j];
        cout << "\n"; 
    }
    cout << "n: new game , w: up, s: down, d:right, a:left, q: quit \n";
}

void applyMove(int direction){
    //for (int i = 0; i < 4; i++) 
        //for (int j = 0; j < 4; j++)    
}

int main()
{
    srand(time(0)); 
    char commandToDir[128];
    commandToDir['s'] = 0;
    commandToDir['d'] = 1;
    commandToDir['w'] = 2;
    commandToDir['a'] = 3;
    newGame(); 
    while (true){
        char command;
        
        printUI();
        cin >> command; 
        if (command == 'n')
            newGame(); 
        else if (command == 'q')
            break;
        else {
            int currentDirection = commandToDir[command];
            cout << currentDirection << "\n"; 
            applyMove(currentDirection);
        } 
    }
    return 0;

}