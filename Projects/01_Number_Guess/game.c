// number Guess game in c
// by @hardik




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int guess, randomNumber, attempts = 0;
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a random number between 1 and 100.\n");
    // Generate a random number between 1 and 100
    srand(time(0)); // Seed the random number generator
    randomNumber = rand() % 100 + 1; // Random number between 1 and 100

    // Loop until the user guesses the correct number

    do
    {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if(guess < randomNumber){
            printf("Guess Large number.\n");
        }else if(guess > randomNumber){
            printf("Guess Small number.\n");
        }else{
            printf("You guessed it right! \n");
        }
    
    } while (guess != randomNumber);

    printf("You took %d attempts to guess the number %d.\n", attempts, randomNumber);
    printf("Thank you for playing!\n");
    printf("Goodbye!\n");
    printf("Developed by @Hardik\n");
    return 0;
}