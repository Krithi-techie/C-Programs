#include <stdio.h>
#include <string.h>

// Function to find the longest common prefix
char* longestCommonPrefix(char strs[][100], int n) {
    if (n <= 0) {
        return "";
    }

    int minLen = strlen(strs[0]);
    for (int i = 1; i < n; i++) {
        int len = strlen(strs[i]);
        if (len < minLen) {
            minLen = len;
        }
    }

    static char result[100];
    int index = 0;

    for (int i = 0; i < minLen; i++) {
        char currentChar = strs[0][i];

        for (int j = 1; j < n; j++) {
            if (strs[j][i] != currentChar) {
                result[index] = '\0';
                return result;
            }
        }

        result[index++] = currentChar;
    }

    result[index] = '\0';
    return result;
}

int main() {
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char strings[n][100];

    printf("Enter the strings:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    }

    char* commonPrefix = longestCommonPrefix(strings, n);

    if (strlen(commonPrefix) > 0) {
        printf("Longest common prefix: %s\n", commonPrefix);
    } else {
        printf("No common prefix.\n");
    }

    return 0;
}
