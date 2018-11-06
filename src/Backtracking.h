//
// Created by ortegajosant on 06/11/18.
//

#ifndef TAREA_5_BACKTRACKING_H
#define TAREA_5_BACKTRACKING_H

#define ROWS 8
#define COLUMNS 8

#include <queue>

using namespace std;

struct Cell {
    Cell(int row, int column, bool status) {
        this->row = row;
        this->column = column;
        this->status = status;
    }
    Cell() {
    }
    int row, column;
    bool status;
};

class Backtracking {
private:
    queue<Cell*> finalQueue = queue<Cell*>();

    bool solveMazeAux(int maze[ROWS][COLUMNS], int row, int column);

    bool canMove(int, int, int maze[ROWS][COLUMNS]);

public:
    bool solveMaze(int maze[ROWS][COLUMNS]);
    queue<Cell*> getQueue();
};


#endif //TAREA_5_BACKTRACKING_H
