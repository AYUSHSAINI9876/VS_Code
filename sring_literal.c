#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // faltu bakchodi
    char s[100];
    int i, alphaFlag = 1, numFlag = 1; 

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin); 

    // Check each character in the string
    for (i = 0; s[i] != '\0'; i++)
    {
        if (isalpha(s[i]))
        {
            numFlag = 0; // It's not a numeral
        }
        else if (!isdigit(s[i]))
        {
            alphaFlag = 0; // It's not an alphabet
        }
    }

    // Check and print the result
    if (alphaFlag)
    {
        printf("alpha\n");
    }
    else if (numFlag)
    {
        printf("num\n");
    }
    else
    {
        printf("mixed\n");
    }

    return 0;
}
