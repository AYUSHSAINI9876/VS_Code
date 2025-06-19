#include <stdio.h>
#include <math.h>

int main()
{

    float a, b, c, d, r1, r2;
    double real, imag;
    
    printf("enter the value of a, b, c");
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b - 4 * a * c);

    if (d >= 0)
    {

        printf("the roots are real\n");

        r1 = (-b + sqrt(d)) / 2 * a;

        r2 = (-b - sqrt(d)) / 2 * a;

        printf("the real roots of the equation are:%.3f and %.3f\n", r1, r2);
    }

    else
        (

            printf("roots are complex"));

    real = (-(b / 2 * a));
    imag = (sqrt(d) / 2 * a);

    printf("complex roots:%0.3f+i(%0.3f)", real, imag, real, imag);

    return 0;
}
