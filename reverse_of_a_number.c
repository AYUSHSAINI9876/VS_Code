#include <stdio.h>

int reverseInteger(int number)
{
    int reversed = 0;

    while (number > 0)
    {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    return reversed;
}

int main()
{

    int number;

    printf("enter the number:");
    scanf("%d", &number);

    if (number < 0)
    {

        printf("enter a positive integer");
    }

    else
    {

        int reversedNumber = reverseInteger(number);
        printf("The reverse of %d is %d\n", number, reversedNumber);
    }

    return 0;
}
