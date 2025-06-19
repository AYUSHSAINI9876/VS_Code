#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("enter the first number");
    scanf("%d", &a);

    printf("enter the second number");
    scanf("%d", &b);
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    while ((b % a) != 0)
    {
        temp = b % a;
        b = a;
        a = temp;
    }
    printf("The GCD is % d", a);
    return 0;
}