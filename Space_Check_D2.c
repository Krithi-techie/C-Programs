#include <stdio.h>
#include <string.h>

void justifySentence(char sentence[], int screenLength) {
    int sentenceLength = strlen(sentence);
    int spacesToInsert = screenLength - sentenceLength;
    int spaceCount = 0;

    for (int i = 0; i < sentenceLength; i++) {
        if (sentence[i] == ' ') {
            spaceCount++;
        }
    }

    int spacesBetweenWords = spaceCount > 1 ? spacesToInsert / (spaceCount - 1) : 0;
    int extraSpaces = spaceCount > 1 ? spacesToInsert % (spaceCount - 1) : 0;

    for (int i = 0; i < sentenceLength; i++) {
        if (sentence[i] == ' ') {
            while (extraSpaces > 0) {
                printf("*");
                extraSpaces--;
            }

            for (int j = 0; j < spacesBetweenWords; j++) {
                printf("*");
            }
        } else {
            printf("%c", sentence[i]);
        }
    }

    printf("\n");
}

int main() {
    char sentence[100];
    int screenLength;

    printf("Enter the sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Enter the screen length: ");
    scanf("%d", &screenLength);

    justifySentence(sentence, screenLength);

    return 0;
}
