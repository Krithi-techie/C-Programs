#include <stdio.h>

int secondLargestDistinct(int arr[], int n) {
    if (n < 2) {
        return -1; 
    }

    int firstMax = arr[0];
    int secondMax = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }

    if (secondMax == -1) {
        return -1; // No distinct second largest element found
    }

    return secondMax;
}

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = secondLargestDistinct(arr, n);

    if (result == -1) {
        printf("No distinct second largest element found.\n");
    } else {
        printf("Second largest distinct element: %d\n", result);
    }

    return 0;
}
