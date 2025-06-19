#include <stdio.h>

int main()
{
    char ch;
    printf("enter charecter:");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90)
    {
        printf("upper case");
    }

    else if (ch >= 67 && ch <= 122)
    {
        printf("lower case");
    }
    else
    {
        printf("not an english letter");
    }
}
