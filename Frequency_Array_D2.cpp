#include <stdio.h>

int main() {
    int sortArr[30];
    int r, count = 1, i;

    printf("Enter no of elements: ");
    scanf("%d", &r);
    printf("Enter elements: ");
    for (i = 0; i < r; i++) {
        scanf("%d", &sortArr[i]);
    }

    for (i = 0; i < r; i++) {
        while (sortArr[i] == sortArr[i + 1]) {
            count++;
            i++;
        }
        if (count > 1) {
            printf("Count of %d -> %d\n", sortArr[i], count);
            count = 1;  
        }
    }

    return 0;
}
