#include <stdio.h>

int main()
{

    float a, b, sum, difference, product, division;

    printf("enter the value of a");
    scanf("%f", &a);

    printf("enter the value of b");
    scanf("%f", &b);

    sum = a + b;
    difference = a - b;
    product = a * b;
    division = a / b;

    printf("the sum is :%f\n", sum);
    printf("the difference is :%f\n", difference);
    printf("the product is :%f\n", product);
    printf("the division is :%f\n", division);

    return 0;
}