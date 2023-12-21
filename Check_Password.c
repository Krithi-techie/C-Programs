#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isSpecialChar(char ch) {
    char specialChars[] = "!@#$%^&*()-+";
    for (int i = 0; i < strlen(specialChars); ++i) {
        if (ch == specialChars[i]) {
            return true;
        }
    }
    return false;
}

bool isStrongPassword(char password[]) {
    int len = strlen(password);
    bool hasLower = false, hasUpper = false, hasSpecial = false, hasDigit = false;

    for (int i = 0; i < len; ++i) {
        if (islower(password[i])) {
            hasLower = true;
        } else if (isupper(password[i])) {
            hasUpper = true;
        } else if (isSpecialChar(password[i])) {
            hasSpecial = true;
        } else if (isdigit(password[i])) {
            hasDigit = true;
        }
    }

    return (len >= 8) && hasLower && hasUpper && hasSpecial && hasDigit;
}

int main() {
    char password[100];
    printf("Enter the password: ");
    scanf("%s", password);

    if (isStrongPassword(password)) {
        printf("Password is strong.\n");
    } else {
        printf("Password is not strong.\n");
    }

    return 0;
}
