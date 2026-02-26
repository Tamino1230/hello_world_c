#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    //  Dice 0-6
    int w = 0;
    // userInput
    int uI = 0;

    // get int
    printf("How many dices: ");
    scanf("%d", &uI);
    for (int i=0; i < uI; i++) {
        w = (rand() % 6) + 1;
        printf("Dice %d: %d\n", i+1, w);
    }
    return 0;

}