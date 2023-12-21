#include <stdio.h>

int main() {
    int x, y, z;

    printf("Enter three distinct values (x, y, z): ");
    scanf("%d %d %d", &x, &y, &z);

    if ((x < y && y < z) || (z < y && y < x))
        printf("2\n"); 
    else if ((y < x && x < z) || (z < x && x < y))
        printf("1\n"); 
    else
        printf("3\n"); 

    return 0;
}