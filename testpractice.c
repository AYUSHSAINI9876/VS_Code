#include <stdio.h>
#include <math.h>

int main()
{
    
    float a, b, c, d, r1, r2, real, imag;

    printf("enter the value of a");
    scanf("%f", &a);

    printf("enter the value of b");
    scanf("%f", &b);
 
    printf("enter the value of c");
    scanf("%f", &c);

    d=(b*b-4*a*c);

    if(d>=0){

        printf("the roots are real");

        r1=(-b+sqrt(d))/2*a;

        r2=(-b-sqrt(d))/2*a;

        printf("the real roots of the equation are:%f and %f", r1, r2);

            }
    
    else(
    
    printf("roots are complex"));

        real=(-(b/2*a));
        imag=(sqrt(d)/2*a);

        printf("complex roots:%0.3f+i%0.3f" ,real, imag, real, imag);

     return 0;
}

