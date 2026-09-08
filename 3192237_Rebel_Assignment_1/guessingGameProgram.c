/*
Program: EECS 348 Assignment 1
Description: A program that gives the user three attempts to guess a constant number between 1 and 10. If guessed correctly outputs a victory message, else outputs failure message
Inputs: N/A
Outputs: Terminal output describing game to user
Collaborators: None
Sources: Gemini 3.1 Pro Thinking Model (Gemini), https://cplusplus.com/reference/cstdio/scanf/ (CPlusPlus.com)
Author: Braeden Rebel (Braeden)
Date Created: 9/8/2026
Date Revised: 9/8/2026
*/

// Include input / output package (Gemini)
#include <stdio.h>

int main() {
    // Assign constant integer to be used for the secret number to 7 (Gemini)
    const int SECRET_NUMBER = 7;
    // Declare integer to be used for user guesses (Gemini)
    int guess;

    // Print introductory message to user (Gemini)
    printf("Guess a number between 1 and 10.\n");

    // Start for loop, assigning variable for keeping track of user attempts to 1 and incrementing until the number of attempts is greater than 3 (Gemini)
    for (int attempt = 1; attempt <= 3; attempt++) {
        // Print attempt count for user and guess query (Gemini)
        printf("Attempt %d/3. Enter your guess: ", attempt);

        // Scan user input and assign the output to a variable representing the user's guess (Gemini), wrap this in an if statement to only perform checks if scanf found valid input (Braeden, CPlusPlus.com)
        if (scanf("%d", &guess))
        {
            // Check if the guess is lower than the secret number (Gemini)
            if (guess < SECRET_NUMBER) {
                // Print the message to indicate the user has guessed a number below the secret number (Gemini)
                printf("That guess is low.\n");
            // Check if the guess is greater than the secret number since it is not less than (Gemini)
            } else if (guess > SECRET_NUMBER) {
                // Print the message to indicate the user has guessed a number above the secret number (Gemini)
                printf("That guess is high.\n");
            // Perform code now that it is established that the guess is equal to the secret number (Gemini)
            } else {
                // Print the message to indicate the user has guessed the secret number (Gemini)
                printf("That guess... is spot on!\n");
                // Stop the loop since the player has won (Gemini)
                break;
            }
        }
        // If scanf failed to assign guess, then perform code for bad input (Braeden)
        else
        {
            // Use scanf(%s) (CPlusPlus.com) to clean input for the next attempt (Braeden)
            scanf("%s");
            // Print a bad input message to the user (Braeden)
            printf("Sorry, that input is not recognized.\n");
        }
    }

    // Test if the user has won by seeing if the last guess matched the secret number (Braeden)
    if (guess == SECRET_NUMBER) {
        // Print the winning message to the user (Gemini)
        printf("You won the game!\n");
    // Perform code for the loss condition since the user has not won (Gemini)
    } else {
        // Print the losing message to the user (Gemini)
        printf("You lost the game. Better luck next time!\n");
    }

    return 0;
}