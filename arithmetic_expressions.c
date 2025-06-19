#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x, y, z, w;

    printf("enter the value of a");
    scanf("%f", &a);
    printf("enter the value of b");
    scanf("%f", &b);
    printf("enter the value of c");
    scanf("%f", &c);

    printf("the value of x is:");

    x = (a + (2 * b) + (3 * c));
    printf("%0.3f\n", x);

    printf("the value of y is:");

    y = ((a / 2) + (b / 2) + (c / 3));
    printf("%0.3f\n", y);

    printf("the value of z is:");

    z = (((1.25 * a) + (2.75 * a * a) + (5.625 * a * a * a)) * (b * b)) / (1.25 + (c * c * c));
    printf("%0.3f\n", z);

    printf("the value of w is:");

    w = ((sqrt(2) * a) + (sqrt(3) * b * b) + (pow(5 / 4, 1 / sqrt(5)) * c * c * c));
    printf("%0.3f\n", w);

    return 0;
}
