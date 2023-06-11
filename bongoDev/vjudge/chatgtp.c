#include <stdio.h>
#include <string.h>

#define MAX_WORD_LENGTH 100

int is_long_word(char *word) {
    int length = strlen(word);
    return length > 10;
}

void abbreviate_word(char *word, char *abbrev) {
    int length = strlen(word);
    abbrev[0] = word[0];
    abbrev[1] = length - 2 + '0';
    abbrev[2] = word[length - 1];
    abbrev[3] = '\0';
}

int main() {
    char input[MAX_WORD_LENGTH];
    char output[MAX_WORD_LENGTH];

    printf("Enter a word: ");
    scanf("%s", input);

    if (is_long_word(input)) {
        abbreviate_word(input, output);
        printf("Abbreviation: %s\n", output);
    } else {
        printf("The word is not too long.\n");
    }

    return 0;
}

