#include <stdio.h>
#include <stdlib.h>

// Function to find duplicates in an array
int* findDuplicates(int arr[], int N, int* resultSize) {
    int* duplicates = NULL; // To store the duplicates
    *resultSize = 0; // Initialize the result size

    for (int i = 0; i < N; i++) {
        int index = abs(arr[i]);

        if (arr[index] >= 0) {
            // Mark the element as visited by negating its value
            arr[index] = -arr[index];
        } else {
            // If the element is already marked as visited, it is a duplicate
            // Allocate memory for the duplicate array and store the duplicate
            duplicates = (int*)realloc(duplicates, (*resultSize + 1) * sizeof(int));
            duplicates[*resultSize] = index;
            (*resultSize)++;
        }
    }

    return duplicates;
}

int main() {
    int N;

    // Taking user input for array size
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];

    // Taking user input for array elements
    printf("Enter the elements of the array (0 to N-1): ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int resultSize;
    int* duplicates = findDuplicates(arr, N, &resultSize);

    // Displaying the result
    if (resultSize == 0) {
        printf("Output: [-1]\n");
    } else {
        printf("Output: [");
        for (int i = 0; i < resultSize; i++) {
            printf("%d", duplicates[i]);

            // Adding a comma and space if not the last element
            if (i < resultSize - 1) {
                printf(", ");
            }
        }
        printf("]\n");

        // Free the memory allocated for the duplicates array
        free(duplicates);
    }

    return 0;
}
