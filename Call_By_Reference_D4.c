#include <stdio.h>

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: a = %d, b = %d\n", num1, num2);

    swapByReference(&num1, &num2);

    printf("After swapping (Main function): a = %d, b = %d\n", num1, num2);

    return 0;
}
