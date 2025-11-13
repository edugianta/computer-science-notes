/*
 * =====================================================================================
 *
 *       Filename:  guessing_game.c
 *
 *    Description:  
 *  
 *        Version:  1.0
 *        Created:  06/11/2025 04:13:15 p.m.
 *       Revision:  none
 *       Compiler:  gcc
 *  
 *         Author:  eduardogiantaglia (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 31
#define MAX_WORDS 100
#define LIVES 5

// Function prototypes
void toLowerCase(char *str);
int isAllLetters(const char *str);
void displayWord(const char *word, const int *guessed);
int isGameWon(const char *word, const int *guessed);
void initializeGuessedArray(const char *word, int *guessed);

int main() {
    // Seed the random number generator
    srand(time(NULL));
    
    int numWords;
    char wordList[MAX_WORDS][MAX_WORD_LENGTH + 1];
    char playAgain;
    
    printf("Welcome to the Word Guessing Game!\n\n");
    
    // Read the number of words
    printf("Enter the number of words in the word list: ");
    scanf("%d", &numWords);
    getchar(); // Consume the newline character
    
    if (numWords <= 0 || numWords > MAX_WORDS) {
        printf("Invalid number of words. Please enter a number between 1 and %d.\n", MAX_WORDS);
        return 1;
    }
    
    // Read the words
    printf("Enter %d words (lowercase letters only, max %d characters):\n", numWords, MAX_WORD_LENGTH);
    for (int i = 0; i < numWords; i++) {
        printf("Word %d: ", i + 1);
        fgets(wordList[i], sizeof(wordList[i]), stdin);
        
        // Remove newline character if present
        size_t len = strlen(wordList[i]);
        if (len > 0 && wordList[i][len - 1] == '\n') {
            wordList[i][len - 1] = '\0';
        }
        
        // Convert to lowercase and validate
        toLowerCase(wordList[i]);
        
        if (!isAllLetters(wordList[i])) {
            printf("Error: Words can only contain letters. Please try again.\n");
            i--; // Retry this word
            continue;
        }
        
        if (strlen(wordList[i]) == 0) {
            printf("Error: Word cannot be empty. Please try again.\n");
            i--; // Retry this word
        }
    }
    
    do {
        // Randomly select a word
        int randomIndex = rand() % numWords;
        char *selectedWord = wordList[randomIndex];
        int wordLength = strlen(selectedWord);
        
        // Array to track which letters have been guessed
        int guessed[MAX_WORD_LENGTH] = {0};
        initializeGuessedArray(selectedWord, guessed);
        
        int lives = LIVES;
        int gameOver = 0;
        
        printf("\n=== NEW GAME ===\n");
        printf("You have %d lives.\n", lives);
        
        while (!gameOver) {
            // Display current state of the word
            printf("\nWord: ");
            displayWord(selectedWord, guessed);
            printf("\n");
            
            // Get user input
            char input[MAX_WORD_LENGTH + 1];
            printf("Enter a letter or guess the whole word: ");
            
            if (scanf("%s", input) != 1) {
                printf("Error reading input.\n");
                continue;
            }
            
            toLowerCase(input);
            
            // Check if input is a single letter or a word guess
            if (strlen(input) == 1) {
                // Single letter guess
                char guess = input[0];
                
                if (!isalpha(guess)) {
                    printf("Please enter only letters.\n");
                    continue;
                }
                
                int found = 0;
                for (int i = 0; i < wordLength; i++) {
                    if (selectedWord[i] == guess) {
                        guessed[i] = 1;
                        found = 1;
                    }
                }
                
                if (found) {
                    printf("Good guess! '%c' is in the word.\n", guess);
                    
                    // Check if player has won
                    if (isGameWon(selectedWord, guessed)) {
                        printf("\nCongratulations! You won! The word was: %s\n", selectedWord);
                        gameOver = 1;
                    }
                } else {
                    lives--;
                    printf("Sorry, '%c' is not in the word. You lose 1 life. Lives remaining: %d\n", guess, lives);
                    
                    if (lives <= 0) {
                        printf("\nGame Over! You ran out of lives. The word was: %s\n", selectedWord);
                        gameOver = 1;
                    }
                }
            } else {
                // Whole word guess
                if (strcmp(input, selectedWord) == 0) {
                    printf("\nCongratulations! You guessed the word correctly: %s\n", selectedWord);
                    gameOver = 1;
                } else {
                    lives--;
                    printf("Sorry, '%s' is not the correct word. You lose 1 life. Lives remaining: %d\n", input, lives);
                    
                    if (lives <= 0) {
                        printf("\nGame Over! You ran out of lives. The word was: %s\n", selectedWord);
                        gameOver = 1;
                    }
                }
            }
        }
        
        // Ask if player wants to play again
        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
        getchar(); // Consume the newline character
        
    } while (playAgain == 'y' || playAgain == 'Y');
    
    printf("Thanks for playing! Goodbye!\n");
    return 0;
}

// Convert string to lowercase
void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int isAllLetters(const char *str) {
    for (int i = 0; str[i]; i++) {
        if (!isalpha(str[i])) {
            return 0;
        }
    }
    return 1;
}

void displayWord(const char *word, const int *guessed) {
    for (int i = 0; word[i]; i++) {
        if (guessed[i]) {
            printf("%c ", word[i]);
        } else {
            printf("_ ");
        }
    }
}

int isGameWon(const char *word, const int *guessed) {
    for (int i = 0; word[i]; i++) {
        if (!guessed[i]) {
            return 0;
        }
    }
    return 1;
}

void initializeGuessedArray(const char *word, int *guessed) {
    int length = strlen(word);
    for (int i = 0; i < length; i++) {
        guessed[i] = 0;
    }
}
