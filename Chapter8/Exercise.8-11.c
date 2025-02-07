#include <stdio.h>
#include<stdbool.h>
#define num 8 



void printboard(char checkers_board[num][num]) {
	for (int i = 0;i < num;i++) {
		for (int j = 0;j < num;j++) {
			printf("%c ", checkers_board[i][j]);
		}
		printf("\n");

	}


}
void setup(char checkers_board[num][num]) {
	
	for (int i = 0;i < num;i++) {
		for (int j = 0;j < num;j++) {
			if ((i + j) % 2 == 0) {
				checkers_board[i][j] = 'B';
			}
			else {
				checkers_board[i][j] = 'R';
			}
		}
	}

}



int main() {
	char checkers_board[num][num];
	setup(checkers_board);
	
	
	printboard(checkers_board);
	
}
   