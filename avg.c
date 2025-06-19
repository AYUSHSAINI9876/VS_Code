#include <stdio.h>

int main()
{

    int a, b, c, d;
    float avg;

    printf("enter a:");
    scanf("%d", &a);

    printf("enter b:");
    scanf("%d", &b);

    printf("enter c:");
    scanf("%d", &c);

    printf("enter d:");
    scanf("%d", &d);

    avg = (a + b + c + d) / 4.0;
    printf("the avg of these numbers is:%.2f\n", avg);

    return 0;
}