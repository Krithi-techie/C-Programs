#include <stdio.h>

int hasPairWithSum(int arr[], int n, int X) {
    int hash[X + 1];
    for (int i = 0; i <= X; i++) {
        hash[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int complement = X - arr[i];

        if (complement >= 0 && hash[complement] == 1) {
            return 1; // Pair found
        }
        hash[arr[i]] = 1;
    }

    return 0; 
}

int main() {
    int n, X;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum (X): ");
    scanf("%d", &X);

    if (hasPairWithSum(arr, n, X)) {
        printf("Yes, %d.\n", X);
    } else {
        printf("No, %d.\n", X);
    }

    return 0;
}
