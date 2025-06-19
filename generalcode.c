#include <stdio.h>

int main()
{
    char choice = 'c';
    switch (choice)
    {
    default:
        printf("30\n");
    case 'a':
        printf("10\n");
    case 'b':
        printf("20\n");
    }

    {
        int n = 10, count = 0, sum = 0;
        while (--n > 0)
        {

            n /= 2;
            count++;
            sum += n;
        }
    }

    {
        int n = 10, count = 0, sum = 0;
        while (n-- > 0)
        {

            n /= 2;
            count++;
            sum += n;
        }
    }

    return 0;
}
