#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int n;
    printf("Enter a positive integer: ");
    scanf("%u", &n);

    int bit_length = 0;

    if (n == 0)
    {
        bit_length = 1; // Special case for n = 0
    }
    else
    {
        bit_length = (int)log2(n) + 1;
    }

    printf("The bit-length is: %d\n", bit_length);

    return 0;
}
