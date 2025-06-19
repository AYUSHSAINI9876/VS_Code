#include <stdio.h>
#include <limits.h>

int main()
{

    int a, b, c, d, e, s, l1, l2, l3, l4, l5;

    printf("enter a:");
    scanf("%d", &a);

    printf("enter b:");
    scanf("%d", &b);

    printf("enter c:");
    scanf("%d", &c);

    printf("enter d:");
    scanf("%d", &d);

    printf("enter e:");
    scanf("%d", &e);

    s = a % 2 + b % 2 + c % 2 + d % 2 + e % 2;

    if (s == 2) // two odds
    {

        //ternary operators :expression 1? expression 2: expression 3//
        l1 = a;
        l1 = (b > l1) ? b : l1;
        l1 = (c > l1) ? c : l1;
        l1 = (d > l1) ? d : l1;
        l1 = (e > l1) ? e : l1;
        printf("Largest number:\n%d", l1);
    }
    else if (s == 3) // exactly three odd numbers
    {
        printf("Smallest three odd numbers:\n");
        // find the smallest number among 5 numbers
        l1 = a;
        l1 = (b < l1) ? b : l1;
        l1 = (c < l1) ? c : l1;
        l1 = (d < l1) ? d : l1;
        l1 = (e < l1) ? e : l1;
        // find the second smallest number among 5 numbers
        l2 = (a < l2 && a > l1) ? a : l2;
        l2 = (b < l2 && b > l1) ? b : l2;
        l2 = (c < l2 && c > l1) ? c : l2;
        l2 = (d < l2 && d > l1) ? d : l2;
        l2 = (e < l2 && e > l1) ? e : l2;
        // find the third smallest number among 5 numbers
        l3 = (a < l3 && a > l2) ? a : l3;
        l3 = (b < l3 && b > l2) ? b : l3;
        l3 = (c < l3 && c > l2) ? c : l3;
        l3 = (d < l3 && d > l2) ? d : l3;
        l3 = (e < l3 && e > l2) ? e : l3;
        // find the fourth smallest number among 5 numbers
        l4 = (a < l4 && a > l3) ? a : l4;
        l4 = (b < l4 && b > l3) ? b : l4;
        l4 = (c < l4 && c > l3) ? c : l4;
        l4 = (d < l4 && d > l3) ? d : l4;
        l4 = (e < l4 && e > l3) ? e : l4;
        // find the fifth smallest number among 5 numbers
        l5 = (a < l5 && a > l4) ? a : l5;
        l5 = (b < l5 && b > l4) ? b : l5;
        l5 = (c < l5 && c > l4) ? c : l5;
        l5 = (d < l5 && d > l4) ? d : l5;
        l5 = (e < l5 && e > l4) ? e : l5;
        // print the smallest three odd numbers
        if (l1 % 2)
            printf("%d ", l1);
        if (l2 % 2)
            printf("%d ", l2);
        if (l3 % 2)
            printf("%d ", l3);
        if (l4 % 2)
            printf("%d ", l4);
        if (l5 % 2)
            printf("%d ", l5);
    }

    return 0;
}