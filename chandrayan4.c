#include <stdio.h>
#include <math.h>

int main()
{
    char day, x;
    int HH, MM, SS, a, i;

    printf("enter the day(1-7) on which u want to launch the chandrayan-4:");
    scanf("%c", &day);

    switch (day)
    {

    case '1':
        printf("sunday\n");
        break;
    case '2':
        printf("monday\n");
        break;
    case '3':
        printf("tuesday\n");
        break;
    case '4':
        printf("wednesday\n");
        break;
    case '5':
        printf("thursday\n");
        break;
    case '6':
        printf("friday\n");
        break;
    case '7':
        printf("saturday\n");
        break;
    }

    printf("please enter the time on which u want to launch chandrayan-4(in HH MM SS) 24 hour format:%d %d %d\n", HH, MM, SS);
    scanf("%d", &HH);
    scanf("%d", &MM);
    scanf("%d", &SS);

    printf("Thank u for entering your input.\nLet's confirm again that u want to launch Chandrayan 4 on day %c: %d hours %d minutes %d seconds\npress 'Y' to confirm.\nY\nThank u.Following are the Calculations:", day, HH, MM, SS);
    printf("enter a:");
    scanf("%d", &a);

    int z = 5 * pow(a, 2) - 2 * a + 38000;
    printf("f(x)=f(%d)=%d", a, z);

    for (i < z; i; i--)   
    {
        if (z % i == 0)   
        {
        }
    }
    return 0;
}