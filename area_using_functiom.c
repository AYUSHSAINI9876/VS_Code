#include <stdio.h>
/* Function to compute the area of a circle */
float myfunc(float r)
{
    float a;
    a = 3.14159 * r * r;
    return a; /* return result */
}
int main()
{
    float radius, area;
    printf("enter radius:");
    scanf("%f", &radius);
    area = myfunc(radius);
    printf("Area is %f \n", area);
}