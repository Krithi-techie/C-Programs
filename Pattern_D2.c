#include <stdio.h>

int main() {
    int rows = 5;
    int start = 1;

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int space = 1; space <= (rows - i) * 5; space++) {
            printf(" ");
        }

        // Print increasing numbers
        int num = start;

        for (int j = 1; j <= i; j++) {
            printf("%-5d", num);
            num += 2;
        }

        start += 2;
        printf("\n");
    }

    return 0;
}
