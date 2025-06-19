#include <stdio.h>

// Function to calculate the greatest common divisor (GCD) of two numbers
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int numerator, denominator;

    // Input the number from the user
    printf("Enter a number less than 1: ");
    scanf("%d", &numerator);

    // Validate the input
    if (numerator >= 1)  
    {
        printf("Invalid input. Please enter a number less than 1.\n");
        return 1;
    }

    // Set the denominator to 1
    denominator = 1;

    // Simplify the fraction by finding the GCD and dividing both numerator and denominator
    int commonDivisor = gcd(numerator, denominator);
    numerator /= commonDivisor;
    denominator /= commonDivisor;

    // Output the simplified fraction
    printf("The fraction in reduced form is: %d/%d\n", numerator, denominator);

    return 0;
}
