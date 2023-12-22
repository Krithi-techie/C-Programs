#include <stdio.h>

int main()
{
    char c;
    int r;
    
    printf("Enter Shape s->Square and c->Circle: ");
    scanf(" %c", &c); 
    
    printf("Enter size: ");
    scanf("%d", &r);

    if(c == 's' || c == 'S') {
        printf("Area of Square: %d\n", r * r);
    }
    else if(c == 'c' || c == 'C') {
        printf("Area of Circle: %f\n", 3.14 * r * r);
    }
    else {
        printf("Enter correct Shape\n");
    }

    return 0;
}
