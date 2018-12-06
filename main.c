#include <stdio.h>
#include <stdlib.h>
#include "game.h"

/*Programmer Andrea Ford
date 11/28/18

Description:
    I am making a word game for anyone to play. I want to show a hint and have them guess a word that I want them to guess.
    I will give them 5 guesses to get it correct and then tell them when they are right or wrong. I will show them which
    letter they missed. If they miss the word with 5 guesses, it will stop the game.
*/
int main()

{
    printf("Can you guess the secret word?\n\n\n");

    getSecretWord(Programmer);
    showHint("Something I am not");

    while (isGameOver() != 1)
    {

        printf(Guess %d of %d \n, currentGuessCount, maxGuesses);

        printf("\nEnter guess: ");
        scanf("%s", &Guess);


        showGuess();
    }
    return 0;
}
