#include <stdio.h>

void egyptianFraction(int a, int b)
{
    if (a <= 0 || b <= 0 || a >= b)
    {
        printf("Invalid input: 0 < a < b must hold.\n");
        return;
    }

    printf("Egyptian Fraction Representation of %d/%d:\n", a, b);

    while (b % a != 0)
    {
        int q = b / a;
        printf("1/%d + ", q);
        a = a * q - b;
        b = b * q;
    }

    printf("1/%d\n", b / a);
}

int main()
{
    int a, b;
    printf("Enter the numerator (a): ");
    scanf("%d", &a);
    printf("Enter the denominator (b): ");
    scanf("%d", &b);

    egyptianFraction(a, b);

    return 0;
}
