#include <stdio.h>

int main()
{
    int marks;

    printf("enter marks obtained by students:");
    scanf("%d", &marks);

    if (marks < 30)
    {
        printf("D\n");
    }
    else if (marks >= 30 && marks < 50)
    {
        printf("C\n");
    }
    else if (marks >= 50 && marks < 70)
    {
        printf("B\n");
    }
    else
    {
        printf("A\n");
    }
    return 0;
}
