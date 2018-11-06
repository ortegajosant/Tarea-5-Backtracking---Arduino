#include <iostream>
#include "src/Backtracking.h"

int main() {
    Backtracking algorithm;

    int maze[8][8] = {
            {0,1,0,0,0,1,0,0},
            {0,1,0,1,1,1,1,0},
            {0,0,0,1,0,0,0,0},
            {1,0,1,1,0,1,1,0},
            {1,0,1,0,0,1,0,0},
            {0,0,0,0,1,1,0,1},
            {1,1,1,0,1,1,0,1},
            {0,0,0,0,1,1,0,0}
    };

    algorithm.solveMaze(maze);

    queue<Cell*> temp = algorithm.getQueue();

    Cell *temp1 = temp.front();
    temp.pop();

    while (!temp.empty()) {
        cout<<temp1->row<< " , "<<temp1->column<<endl;
        temp1 = temp.front();
        temp.pop();
    }
}