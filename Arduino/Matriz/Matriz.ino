#include "LedControl.h"
#include "Queue.h"

#define ROWS 8
#define COLUMNS 8

const byte DIN      = 12;   //Lo conectamos en din
const byte CS       = 11;   //Lo conectamos a Load (cs)
const byte CLK      = 10;   //Lo conectarmos a CLK 
const byte QTD_DISP =  1;   //El numero de matriz con controlador M72XX

LedControl ledMatriz = LedControl(DIN, CLK, CS, QTD_DISP);

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


class Backtracking{
  private:
    Queue<Cell*> finalQueue = Queue<Cell*>();

    bool solveMazeAux(int maze[ROWS][COLUMNS], int row, int column);

    bool canMove(int, int, int maze[ROWS][COLUMNS]);

public:
    bool solveMaze(int maze[ROWS][COLUMNS]);
    Queue<Cell*> getQueue();
};

bool Backtracking::solveMaze(int (*maze)[8]) {
    return solveMazeAux(maze, 0, 0);
}

bool Backtracking::solveMazeAux(int maze[8][8], int row, int column) {
    if (row == ROWS - 1 && column == COLUMNS - 1) {
        finalQueue.enqueue(new Cell(row, column, true));
        return true;
    }

    if (canMove(row, column, maze)) {
        maze[row][column] = 2;
        finalQueue.enqueue(new Cell(row, column, true));
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
        finalQueue.enqueue(new Cell(row, column, false));
        return false;
    }
    return false;
}

bool Backtracking::canMove(int row, int column, int (*maze)[8]) {
    return 0 <= row && row < ROWS && column >= 0 && column < COLUMNS && maze[row][column] == 0;
}

Queue<Cell*> Backtracking::getQueue() {
    return finalQueue;
}

void setup() {
  ledMatriz.shutdown(0, false);
  ledMatriz.setIntensity(0, 5);
  ledMatriz.clearDisplay(0);
  ledMatriz.clearDisplay(0);

  Backtracking algorithm;
  int maze1[8][8] = {
                {0, 0, 0, 0, 0, 1, 1, 1},
                {1, 0, 1, 1, 1, 1, 0, 1},
                {1, 0, 1, 0, 0, 0, 0, 1},
                {1, 0, 1, 1, 1, 0, 1, 0},
                {1, 0, 0, 0, 1, 0, 0, 0},
                {0, 0, 1, 1, 1, 0, 1, 0},
                {0, 1, 1, 0, 1, 0, 1, 0},
                {0, 0, 0, 0, 0, 0, 1, 0}};
  int maze2[8][8] = {
                {0, 0, 1, 0, 0, 0, 0, 1},
                {1, 0, 1, 1, 1, 1, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 1},
                {1, 0, 1, 1, 1, 1, 1, 0},
                {1, 0, 0, 0, 1, 0, 0, 0},
                {0, 0, 1, 0, 0, 0, 1, 0},
                {0, 1, 1, 1, 1, 1, 1, 0},
                {0, 0, 1, 0, 0, 0, 1, 0}};

  int maze3[8][8] = {
                {0, 0, 0, 0, 0, 1, 1, 1},
                {1, 0, 1, 1, 1, 1, 0, 1},
                {1, 0, 0, 1, 0, 0, 0, 0},
                {1, 0, 1, 1, 1, 0, 1, 0},
                {1, 0, 0, 0, 1, 0, 1, 0},
                {0, 0, 1, 1, 1, 0, 1, 0},
                {0, 1, 0, 0, 0, 0, 1, 1},
                {0, 0, 0, 1, 1, 0, 0, 0}};

  int maze4[8][8] = {
                {0, 0, 0, 1, 1, 1, 1, 1},
                {0, 1, 1, 1, 1, 1, 0, 1},
                {0, 1, 1, 0, 0, 0, 0, 1},
                {0, 0, 0, 0, 1, 1, 0, 0},
                {1, 1, 1, 0, 1, 1, 0, 1},
                {0, 0, 1, 0, 1, 0, 1, 1},
                {0, 1, 1, 0, 1, 0, 0, 0},
                {0, 0, 0, 0, 0, 0, 1, 0}};

  int maze5[8][8] = {
                {0, 0, 0, 0, 0, 1, 1, 1},
                {1, 1, 1, 1, 0, 1, 0, 1},
                {1, 0, 0, 0, 0, 0, 0, 1},
                {1, 1, 1, 0, 1, 1, 1, 1},
                {1, 1, 0, 0, 1, 0, 0, 0},
                {0, 0, 1, 0, 0, 0, 1, 0},
                {0, 1, 1, 1, 1, 0, 1, 0},
                {0, 0, 0, 0, 0, 0, 1, 0}};
       
  algorithm.solveMaze(maze5);

  Queue<Cell*> cola = algorithm.getQueue();
  Cell *temp;
  
  while(!cola.isEmpty()){
    temp = cola.dequeue();
    ledMatriz.setLed(0, temp->row, temp->column, temp->status);
    delay(150);
  }

}

void loop(){

}
