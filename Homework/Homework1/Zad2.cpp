#include <iostream>
#include <windows.h>
#include <cstring>

int solution[8][8] = {0};
std::string stringPath;

void addToString(int x, int y){
    stringPath = "(" + std::to_string(x) + ", " + std::to_string(y) + ") -> " + stringPath;
}

bool path(int maze[8][8], int start_x, int start_y, int end_x, int end_y){
    if(start_x == end_x && start_y == end_y) {
        maze[start_x][start_y] = 2;
        stringPath = "(" + std::to_string(start_x) + ", " + std::to_string(start_y) + ") ";
        return true;
    }

    if(start_x >= 0 && start_y >= 0 && start_x < 8 && start_y < 8 && solution[start_x][start_y] == 0 && maze[start_x][start_y] == 0){
        maze[start_x][start_y] = 2;
        if(path(maze, start_x-1, start_y, end_x, end_y)){
            addToString(start_x, start_y);
            return true;
        }
        if(path(maze, start_x, start_y-1, end_x, end_y)){
            addToString(start_x, start_y);
            return true;
        }
        if(path(maze, start_x+1, start_y, end_x, end_y)){
            addToString(start_x, start_y);
            return true;
        }
        if(path(maze, start_x, start_y+1, end_x, end_y)){
            addToString(start_x, start_y);
            return true;
        }
        maze[start_x][start_y] = 0;
        return false;
    }
    return false;
}

void printMaze(int maze[8][8], int scaleSize){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for(int i = 0; i < 8*scaleSize; i++) {
        for(int j = 0; j < 8*scaleSize; j++) {
            switch(maze[i/scaleSize][j/scaleSize]){
            // not path
            case 0:
                SetConsoleTextAttribute(hConsole, 30);
                break;
            // wall
            case 1:
                SetConsoleTextAttribute(hConsole, 70);
                break;
            // path
            case 2:
                SetConsoleTextAttribute(hConsole, 50);
                break;
            }
            std::cout << " ";
        }
        std::cout << std::endl;
    }
    SetConsoleTextAttribute(hConsole, 7);
}

int main() {

    int maze[8][8] = {
        {0, 1, 0, 1, 1, 0, 0, 1},
        {0, 1, 0, 0, 0, 0, 1, 1},
        {0, 1, 1, 1, 1, 0, 1, 0},
        {0, 1, 0, 0, 0, 0, 1, 0},
        {0, 0, 0, 1, 1, 1, 1, 0},
        {0, 1, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 1, 1, 0, 1, 1},
        {0, 1, 0, 0, 1, 0, 0, 0}
    };

    bool isPath = path(maze, 0, 0, 7, 7);
    isPath ? std::cout << "true" : std::cout << "false";

    if(isPath){
        std::cout << std::endl << stringPath << std::endl;
        printMaze(maze, 2);
    }

    return 0;
}
