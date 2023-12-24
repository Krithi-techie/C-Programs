#include <stdio.h>

void findFirstAndLast(int arr[], int n, int x) {
    int firstOccurrence = -1, lastOccurrence = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            firstOccurrence = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == x) {
            lastOccurrence = i;
            break;
        }
    }

    printf("First occurrence: %d\n", firstOccurrence);
    printf("Last occurrence: %d\n", lastOccurrence);
}

int main() {
    int n, x;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target element (x): ");
    scanf("%d", &x);
    findFirstAndLast(arr, n, x);

    return 0;
}
