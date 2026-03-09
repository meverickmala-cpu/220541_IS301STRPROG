/*
    Lab 2: Guessing Game
    Description: This program implements a simple guessing game where the user has to guess a randomly generated number between 1 and 20. The user has 5 attempts to guess the number, and after each guess, the program provides feedback on whether the guess is too high, too low, or correct. If the user fails to guess the number within 5 attempts, the program reveals the correct number.
    Developed and edited by: Vincent Mala
    Date: 03/10/2026
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
int getGuess();
void printSuccess();
void printFailure(int number);
void printSorry(int number);

int main() {
    srand(time(0));
    int number = rand() % 20 + 1;
    int guess, success = 0;

    printf("I am thinking of a number between 1 and 20.\n");

    for (int i = 0; i < 5; i++) {
        guess = getGuess();
        if (guess == number) {
            printSuccess();
            success = 1;
            break;
        } else if (guess < number) {
            printf("Your guess is low. Try again:\n");
        } else {
            printf("Your guess is high. Try again:\n");
        }
    }

    if (!success) {
        printSorry(number);
    }

    return 0;
}

// Function definitions
int getGuess() {
    int g;
    printf("Can you guess what it is? ");
    scanf("%d", &g);
    return g;
}

void printSuccess() {
    printf("Congratulations! You did it.\n");
}

void printSorry(int number) {
    printf("Sorry. The number was %d. You should have gotten it by now. Better luck next time.\n", number);
}
