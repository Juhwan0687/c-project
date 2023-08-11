#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_LENGTH 100
#define MAX_TRIES 7

int main() {
    char *words[] = {"apple", "banana", "cherry", "orange", "peach","switch","grape","tangerine","strawberry","asaiberry","melon","watermelon","fashionfruit","dragonfruit","mango","mangostin","tomato","carrot","onion","rose","whale","polarbear","rocket","astronaut","space","circle","rectangle","triangle","pentagon","ship","boat","airplane","aircraft"};
    int num_words = sizeof(words) / sizeof(char *);
    char word[MAX_LENGTH];
    char guessed_word[MAX_LENGTH];
    int tries = 0;
    int correct_guesses = 0;
    int word_length;
    int i;

    srand(time(NULL));
    strcpy(word, words[rand() % num_words]);
    word_length = strlen(word);

    for (i = 0; i < word_length; i++) {
        guessed_word[i] = '_';
    }
    guessed_word[i] = '\0';

    printf("Welcome to Hangman!\n");
    while (tries < MAX_TRIES && correct_guesses < word_length) {
        char guess;
        int correct_guess = 0;

        printf("Guess the word: %s\n", guessed_word);
        printf("Enter your guess: ");
        scanf(" %c", &guess);

        for (i = 0; i < word_length; i++) {
            if (word[i] == guess) {
                correct_guess = 1;
                if (guessed_word[i] == '_') {
                    guessed_word[i] = guess;
                    correct_guesses++;
                }
            }
        }

        if (!correct_guess) {
            tries++;
            printf("Incorrect! You have %d tries left.\n", MAX_TRIES - tries);
        }
    }

    if (correct_guesses == word_length) {
        printf("Congratulations! You won!\n");
    } else {
        printf("Sorry, you lost. The word was %s.\n", word);
    }

    return 0;
}
