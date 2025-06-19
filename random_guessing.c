#include <stdio.h>

int main()
{

    int n, player_number, x;

    printf("enter any random number:");
    scanf("%d", &n);

    do
    {
        printf("enter the number guessed by the player:");
        scanf("%d", &player_number);                      

        if (player_number > n)
        {
            printf("LOWER NUMBER PLEASE\n");
        }
        else if (player_number < n)
        {
            printf("HIGHER NUMBER PLEASE\n");
        }
        else
            (printf("the number is guessed and u guessed the number in %d number of guesses\n", x));

        x++;
    } while (player_number != x);

    return 0;
}
