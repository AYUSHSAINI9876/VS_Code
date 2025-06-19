#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer between 0 and 255: ");
    scanf("%d", &n);

    if (n < 0 || n > 255)
    {
        printf("Input is out of range.\n");
        return 1;
    }

    printf("Binary representation of %d is: ", n);
    for (int i = 7; i >= 0; i--)
    {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }

    return 0;
}
