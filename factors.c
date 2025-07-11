#include <stdio.h>

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }
    printf("Factors of %d in increasing order: ", n);
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
