#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to represent the map
typedef struct {
    char key;
    const char *value;
} KeyValuePair;

// Function to get the value associated with a key in the map
const char* getValue(KeyValuePair *map, int mapSize, char key) {
    for (int i = 0; i < mapSize; i++) {
        if (map[i].key == key) {
            return map[i].value;
        }
    }
    return "";
}

// Function to generate letter combinations
void generateCombination(char *current, const char *digits, int index, char **result, KeyValuePair *map, int mapSize, int *resultSize) {
    if (digits[index] == '\0') {
        current[index] = '\0';
        strcpy(result[*resultSize], current);
        (*resultSize)++;
    } else {
        char currentDigit = digits[index];
        const char *mapping = getValue(map, mapSize, currentDigit);
        int len = strlen(mapping);

        for (int i = 0; i < len; i++) {
            current[index] = mapping[i];
            generateCombination(current, digits, index + 1, result, map, mapSize, resultSize);
        }
    }
}

// Function to convert C++ letterCombinations to C
char** letterCombinations(const char *digits, int *returnSize) {
    if (digits == NULL || digits[0] == '\0') {
        *returnSize = 0;
        return NULL;
    }

    KeyValuePair map[] = {
        {'2', "abc"}, {'3', "def"}, {'4', "ghi"},
        {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
        {'8', "tuv"}, {'9', "wxyz"}
    };
    int mapSize = sizeof(map) / sizeof(map[0]);

    int possibilities = 1;
    for (int i = 0; digits[i] != '\0'; i++) {
        const char *mapping = getValue(map, mapSize, digits[i]);
        possibilities *= strlen(mapping);
    }

    char **result = (char **)malloc(possibilities * sizeof(char *));
    for (int i = 0; i < possibilities; i++) {
        result[i] = (char *)malloc((strlen(digits) + 1) * sizeof(char));
    }

    int resultSize = 0;
    char *current = (char *)malloc((strlen(digits) + 1) * sizeof(char));
    generateCombination(current, digits, 0, result, map, mapSize, &resultSize);
    free(current);

    *returnSize = resultSize;
    return result;
}

int main() {
    char digits[20]; // Assuming a reasonable maximum length for the input
    int returnSize;

    printf("Enter the digits (2-9): ");
    scanf("%s", digits);

    char **result = letterCombinations(digits, &returnSize);

    printf("Output: [");
    for (int i = 0; i < returnSize; i++) {
        printf("\"%s\"", result[i]);
        if (i < returnSize - 1) {
            printf(",");
        }
        free(result[i]);
    }
    printf("]\n");

    free(result);

    return 0;
}
