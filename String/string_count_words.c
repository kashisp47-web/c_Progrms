#include<stdio.h>
#include<string.h>

void countWordsAndFindLongest(char sentence[]) {
    int wordCount = 0, maxLength = 0, currentLength = 0;
    char longestWord[100], currentWord[100];
    int i = 0, j = 0;

    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            currentWord[j++] = sentence[i];
            currentLength++;
        } else {
            if (currentLength > 0) {
                currentWord[j] = '\0'; // Null-terminate the current word
                wordCount++;

                if (currentLength > maxLength) {
                    maxLength = currentLength;
                    strcpy(longestWord, currentWord); // Copy the current word to longestWord
                }

                currentLength = 0;
                j = 0;
            }
        }
        i++;
    }

    // Handle the last word (if the sentence doesn't end with a space)
    if (currentLength > 0) {
        currentWord[j] = '\0';
        wordCount++;

        if (currentLength > maxLength) {
            maxLength = currentLength;
            strcpy(longestWord, currentWord);
        }
    }

    printf("Number of words: %d\n", wordCount);
    printf("Longest word: %s\n", longestWord);
}

int main() {
    char sentence[200];

    // Input the sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); // Use fgets to read the entire sentence, including spaces

    // Process the sentence
    countWordsAndFindLongest(sentence);

    return 0;
}
