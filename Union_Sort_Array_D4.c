#include <stdio.h>

void findUnion(int *arr1, int n, int *arr2, int m) {
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
        } else if (arr1[i] > arr2[j]) {
            printf("%d ", arr2[j]);
            j++;
        } else {
            
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
    while (i < n) {
        printf("%d ", arr1[i]);
        i++;
    }
    while (j < m) {
        printf("%d ", arr2[j]);
        j++;
    }

    printf("\n");
}

int main() {
    int n, m;

    printf("Enter the size of the first array: ");
    scanf("%d", &n);

    int arr1[n];

    printf("Enter the elements of the first array (sorted): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &m);

    int arr2[m];

    printf("Enter the elements of the second array (sorted): ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }
    printf("Union of the two arrays: ");
    findUnion(arr1, n, arr2, m);

    return 0;
}
