#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("enter the number:");
        scanf("%d", &n);

        if (n % 2 != 0)
        {
            break;
        }
    } while (1);
    printf("thank u");

    return 0;
}
