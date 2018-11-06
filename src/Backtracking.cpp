//
// Created by ortegajosant on 06/11/18.
//

#include "Backtracking.h"


bool Backtracking::solveMaze(int (*maze)[8]) {
    return solveMazeAux(maze, 0, 0);
}

bool Backtracking::solveMazeAux(int maze[8][8], int row, int column) {
    if (row == ROWS - 1 && column == COLUMNS - 1) {
        finalQueue.push(new Cell(row, column, true));
        return true;
    }

    if (canMove(row, column, maze)) {
        maze[row][column] = 2;
        finalQueue.push(new Cell(row, column, true));
        if (solveMazeAux(maze, row + 1, column)) {
            return true;
        }
        if (solveMazeAux(maze, row, column + 1)) {
            return true;
        }
        if (solveMazeAux(maze, row - 1, column)) {
            return true;
        }
        if (solveMazeAux(maze, row, column - 1)) {
            return true;
        }
        finalQueue.push(new Cell(row, column, false));
        return false;
    }
    return false;
}

bool Backtracking::canMove(int row, int column, int (*maze)[8]) {
    return 0 <= row && row < ROWS && column >= 0 && column < COLUMNS && maze[row][column] == 0;
}

queue<Cell*> Backtracking::getQueue() {
    return finalQueue;
}
