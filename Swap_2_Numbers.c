#include <stdio.h>

int main()
{
    int val1,val2;
    printf("Enter value 1 and value 2: ");
    scanf("%d %d",&val1,&val2);
    val1=val1+val2;
    val2=val1-val2;
    val1=val1-val2;
    printf("%d %d",val1,val2);
    
    return 0;
}