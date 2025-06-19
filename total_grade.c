#include <stdio.h>

int main()
{

    int n, i;
    float attendence, class_test, midsem, end_sem, total_marks;

    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("enter the marks of student %d\n", i);

        printf("attendence[40]:");
        scanf("%f", &attendence);

        printf("class_test_marks[20]:");
        scanf("%f", &class_test);

        printf("midsem_marks[60]:");
        scanf("%f", &midsem);

        printf("endsem_marks[100]:");
        scanf("%f", &end_sem);
    }
    total_marks = ((attendence * 10) / 40) + ((class_test * 20) / 20) + ((midsem * 30) / 60) + ((end_sem * 40) / 100);

    if (total_marks >= 90)
    {
        printf("grade is EX\n");
    }

    else if (total_marks >= 80 && total_marks < 90)
    {
        printf("the grade is A\n");
    }

    else if (total_marks >= 70 && total_marks < 80)
    {
        printf("the grade is B\n");
    }

    else if (total_marks >= 60 && total_marks < 70)
    {
        printf("the grade is C\n");
    }

    else if (total_marks >= 50 && total_marks < 60)
    {
        printf("the grade is D\n");
    }

    else if (total_marks >= 35 && total_marks < 50)
    {
        printf("you are pass\n");
    }
    else
        (printf("you are fail\n"));

    printf("Student %d\n Total marks: %.2f\n", i, total_marks);

    return 0;
}