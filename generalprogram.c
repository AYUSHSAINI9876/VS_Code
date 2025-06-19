#include <stdio.h>

int main()
{

    int a, b, c, d;

    printf("enter a, b, c, d:");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    float x = a + ((((b / c) / d) * 10) * 5) - b + ((20 * d) / c);

    printf("the final value is %f\n", x);

    return 0;
}