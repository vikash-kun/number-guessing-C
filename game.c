#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int number, guess, attempts = 0;
    int lower = 1, upper = 100; // range of the number

    // seed the random number generator
    srand(time(0));
    number = (rand() % (upper - lower + 1)) + lower;

    printf("====================================\n");
    printf("    number guessing game\n");
    printf("guess the number between %d and %d\n", lower, upper);
    printf("====================================\n\n");

    // game loop
    do {
        printf("enter your guess : ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("too high! try again. \n\n");
        } else if(guess < number) {
            printf("too low! try again. \n\n");
        } else {
            printf("\ncongratulations! you guessed the number in %d attempts. \n", attempts);
        }
    } while (guess != number);

    printf("thanks for playing!\n");
    return 0;
}