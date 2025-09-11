#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));
    int guess;
    int attempts = 0;
    int last_diff = 100;
    int random = (rand() % 100) + 1;

    for (attempts = 1; attempts <= 20; attempts++) {
        printf("\n----==================GUESSING GAME==================----\n");
        printf("Attempt: %d - Guess the Number (1-100): ", attempts);
        scanf("%d", &guess);

    int diff = abs(random - guess);

    if (guess == random) {
        printf("\nYou got it right in %d guesses!\n", attempts);
        break;
    } else if (diff < last_diff) {
        printf("\nYou're getting closer!\n");
    } else {
        printf("\nOh no! You're getting farther away!\n");
    }
    last_diff = diff;
    }

    if (guess != random) {
        printf("\nYou have failed! The number was %d\n", random);
    }

    return 0;
}
