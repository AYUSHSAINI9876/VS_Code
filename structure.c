#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct person
{
    char *name;
    int salary;
    int age;
} person, p1, p2;

int main()
{
    struct person p1;
    p1.salary = 100000;
    p1.age = 18;
    p1.name = (char *)malloc(6); // Allocate enough memory for "AYUSH" (including the null-terminator)
    strcpy(p1.name, "AYUSH");

    printf("name of the first person is %s.\n", p1.name);

    // Don't forget to free the allocated memory when you're done with it
    free(p1.name);

    struct person p2;
    p2.salary = 80000;
    p2.age = 15;
    p2.name = (char *)malloc(6); 
    strcpy(p2.name, "YASHRAJ");

    printf("age of the second person is %d.\n", p1.age);

    free(p1.name);

    return 0;
}