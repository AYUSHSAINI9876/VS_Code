#include <stdio.h>

int main()
{
    int a, b, a1, a2, a3, b1, b2, b3;

    printf("enter a");
    scanf("%d", &a);

    printf("enter b");
    scanf("%d", &b);

    a1 = (int)(a % 10);
    a2 = (int)((a / 10) % 10);
    a3 = (int)(((a / 10) / 10) % 10);

    b1 = (int)(b % 10);
    b2 = (int)((b / 10) % 10);
    b3 = (int)(((b / 10) / 10) % 10);

    if (a3 != 0 && b3 != 0)
    {
        if (a1 == b3 && a2 == b2 && a3 == b1)
        {
            printf("Perfect Pair\n");
        }
        else
        {
            printf("Not a perfect pair\n");
        }
    }

    else if ((a3 == 0 && b3 == 0) && (a2 != 0 && b2 != 0))
    {

        if (a1 == b2 && a2 == b1)
        {
            printf("Perfect Pair\n");
        }
        else
        {
            printf("Not a perfect pair\n");
        }
    }
    else if ((a2 == 0 && b2 == 0) && (a3 == 0 && b3 == 0))
    {
        // printf("In 3rd if.\n");
        if (a1 == b1)
        {
            printf("Perfect Pair\n");
        }
        else
        {
            printf("Not a perfect pair\n");
        }
    }
    else
        (
            printf("wrong input\n"));

    return 0;
}