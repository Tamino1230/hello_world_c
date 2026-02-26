#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int r = (rand() % 100) + 1;
    int guess = 0;
    int attemps = 0;
    
    printf("Guess a Number from 1-100!\n");

    printf("[DEBUG] r=%d\n", r);
    while (1) {
        printf("Your guess: ");
        attemps++;
        scanf("%d", &guess);
        if (guess == r) {
            printf("You guessed right in %d Attempts!\n", attemps);
            break;
        } else if (guess < r)
        {
            printf("Number needs to be bigger!\n");
            continue;
        } else {
            printf("Number needs to be smaller!\n");
            continue;
        }
    }

    return 0;
}