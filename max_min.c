#include <stdio.h>

int main()
{
    int num, max, min;
    int first = 1; // Flag to check if it's the first input

    printf("Enter positive integers (0 to stop): \n");

    while (1)
    {
        printf("Enter a positive integer (0 to stop): ");
        scanf("%d", &num);

        if (num == 0)
        {
            break; // Exit the loop when 0 is entered
        }

        if (first)
        {
            // If it's the first input, set both max and min to the first number
            max = num;
            min = num;
            first = 0; // Turn off the first flag
        }
        else
        {
            // Compare the input with max and min using fewer comparisons
            if (num > max)
            {
                max = num;
            }
            else if (num < min)
            {
                min = num;
            }
        }
    }

    if (first)
    {
        printf("No positive integers were entered.\n");
    }
    else
    {
        printf("Maximum: %d\n", max);
        printf("Minimum: %d\n", min);
    }

    return 0;
}
