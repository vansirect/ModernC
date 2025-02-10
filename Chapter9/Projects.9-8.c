#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<time.h>
#include<cstdbool>
int roll_dice(void) {
    srand((unsigned)time(NULL));
     
    int move = (rand()  % 6) + 1;
    int movetwo = (rand() % 6) + 1;
    return move + movetwo;
}

bool play_game(void) {
    int first = roll_dice();
    int point = first;
    printf("You rolled: %d\n", first);

    if (first == 7 || first == 11) {
        printf("You win!\n");
        return true;
    }
    else if (first == 2 || first == 3 || first == 12) {
        printf("You lose!\n");
        return false;
    }

    printf("Your point is: %d\n", point);

    int after;
    do {
        after = roll_dice();
        printf("You rolled: %d\n", after);

        if (after == point) {
            printf("You win!\n");
            return true;
        }
        else if (after == 7) {
            printf("You lose!\n");
            return false;
        }
    } while (true);
}

int main(void) {
    int win = 0, loss = 0;
    char play_again;

    do {
        if (play_game()) {
            win++;
        }
        else {
            loss++;
        }

        printf("Wins: %d, Losses: %d\n", win, loss);

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &play_again);

    } while (play_again == 'y' || play_again == 'Y');

    printf("Final score - Wins: %d, Losses: %d\n", win, loss);
    return 0;
}
