#include <stdio.h>
#include <stdlib.h>

void incrementLargeInteger(int *digits, int n) {
    int carry = 1;

    for (int i = n - 1; i >= 0; i--) {
        int total = digits[i] + carry;
        digits[i] = total % 10;
        carry = total / 10;
    }

    // If there's still a carry after the loop, print the carry.
    while (carry > 0) {
        printf("%d", carry % 10);
        carry /= 10;
    }

    // Print the modified array.
    for (int i = 0; i < n; i++) {
        printf("%d", digits[i]);
    }

    printf("\n");
}

int main() {
    char input[1000];

    // Get input from the user
    printf("Enter a large integer represented as a sequence of digits (without leading zeros): ");
    scanf("%s", input);

    // Convert the input string to an array of integers
    int n = 0;
    while (input[n] != '\0') {
        n++;
    }

    int *largeInteger = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        largeInteger[i] = input[i] - '0';
    }

    // Increment the large integer
    incrementLargeInteger(largeInteger, n);

    // Free dynamically allocated memory
    free(largeInteger);

    return 0;
}
