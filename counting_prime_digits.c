#include <stdio.h>

int isPrime(int digit)
{
    if (digit <= 1)
    {
        return 0; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i * i <= digit; i++)    
    {
        if (digit % i == 0)
        {
            return 0; // If divisible by any number other than 1 and itself, not prime
        }
    }
    return 1; // If not divisible by any number other than 1 and itself, it's prime
}

int countPrimeDigits(int number)
{
    int count = 0;
    while (number > 0)
    {
        int digit = number % 10;
        if (isPrime(digit))
        {
            count++;
        }
        number /= 10;
    }
    return count;
}

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Please enter a positive number.\n");
        return 1;
    }

    int primeDigitCount = countPrimeDigits(num);

    printf("Number of prime digits in %d is: %d\n", num, primeDigitCount);

    return 0;
}
