#include <stdio.h>

int main()
{

    float x, a, b, c;

    printf("enter the value of x:");
    scanf("%f", &x);

    printf("1/x=%.3f\n", 1 / x);

    a = x + (1 / x);

    printf("the value of x+1/x is:%.3f\n", a);

    b = x + (1 / a);

    printf("the value of x+x+1/x is:%.3f\n", b);

    c = x + (1 / b);

    printf("the value of x+1/x+x+1/x is:%.3f\n", c);

    return 0;
}
