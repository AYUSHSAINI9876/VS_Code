#include <stdio.h>

int main()
{
    int a, b;

    printf("enter the value of a", a);
    scanf("%d", &a);
    
    printf("enter the value of b", b);
    scanf("%d", &b);

    printf("a+b= %d \n", a + b);
    printf("a-b= %d \n", a - b);
    printf("a*b= %d \n", a * b);
    printf("a/b= %d \n", a / b);
    printf("a || b= %d \n", a || b);
    printf("a&&b= %d \n", a && b);

    return 0;
}
