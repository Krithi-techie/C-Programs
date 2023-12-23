#include <stdio.h>
#include <string.h>

int areAnagrams(const char *s, const char *t) {
    if (strlen(s) != strlen(t)) {
        return 0;
    }

    int count[256] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i]]++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char s[100], t[100];

    printf("Enter the first string: ");
    scanf("%s", s);

    printf("Enter the second string: ");
    scanf("%s", t);

    if (areAnagrams(s, t)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
