#include <stdio.h>

int main()
{
    float r, m, c, x;

    printf("enter the value of r:");
    scanf("%f", &r);

    printf("enter the value of m:");
    scanf("%f", &m);

    printf("enter the value of c:");
    scanf("%f", &c);

    x = (r * r * (1 + (m * m))) - (c * c);

    if (x < 0)
    {
        printf("the circle and the line do not intersect");
    }
    else
        (

            printf("they intersect each other")

        );

    return 0;
}
