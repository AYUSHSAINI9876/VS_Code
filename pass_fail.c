#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 30 && marks <= 100)
    {
        printf("Student has passed.\n");
    }
    else if (marks < 30)
    {
        printf("student has failed.\n");
    }
    else
    {
        printf("invalid marks enterd.\n");
    }

    return 0;
}
