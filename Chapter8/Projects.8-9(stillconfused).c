#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void printbrd(char brd[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", brd[i][j]);
        }
        printf("\n");
    }
}
void setup(char grid[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            grid[i][j] = '.';
        }
    }
}



int main() {
    char  brd[SIZE][SIZE];
    int directions[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
    int x = 0, y = 0; 
    char letter = 'A';

    setup(brd);
    srand((unsigned)time(NULL));
    brd[x][y] = letter;
    while (letter < 'Z') {
        int possible_moves = 0;
        int next_x, next_y;

       
        for (int i = 0; i < 4; i++) {
            next_x = x + directions[i][0];
            next_y = y + directions[i][1];
            if (next_x >= 0 && next_x < SIZE && next_y >= 0 && next_y < SIZE && brd[next_x][next_y] == '.') {
                possible_moves++;
            }
        }

        if (possible_moves == 0) break;

        int move;
        do {
            move = rand() % 4;
            next_x = x + directions[move][0];
            next_y = y + directions[move][1];
        } while (next_x < 0 || next_x >= SIZE || next_y < 0 || next_y >= SIZE || brd[next_x][next_y] != '.');

        letter++;
        brd[next_x][next_y] = letter;
        x = next_x;
        y = next_y;
    }

    printbrd(brd);

    return 0;
}