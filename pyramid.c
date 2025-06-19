#include <stdio.h>

void printAlphabetPyramid(int height)
{
    if (height < 1 || height > 26)
    {
        printf("Height should be between 1 and 26.\n");
        return;
    }

    int width = 2 * height - 1;

    for (int i = 1; i <= height; i++)
    {
        int spaces = height - i;    

        // Print leading spaces
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        // Print left half of the pyramid
        for (int j = 0; j < i; j++)
        {
            printf("%c", 'A' + j);
        }

        // Print right half of the pyramid
        for (int j = i - 2; j >= 0; j--)
        {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }
}

int main()
{

    int height;

    printf("Enter the height of the pyramid (1 to 26): ");
    scanf("%d", &height);

    printAlphabetPyramid(height);

    return 0;
}
