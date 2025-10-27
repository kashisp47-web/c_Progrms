#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, userGuess, attempts = 0, maxAttempts = 10;

    // Seed the random number generator
    srand(time(0));
    randomNumber = (rand() % 100) + 1; // Generate a random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100. You have %d attempts to guess it.\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Enter your guess: ");
        scanf("%d", &userGuess);

        attempts++;

        if (userGuess == randomNumber) {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        } else if (userGuess < randomNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }

        if (attempts == maxAttempts) {
            printf("Sorry, you've used all your attempts. The number was %d.\n", randomNumber);
        }
    }

    return 0;
}