#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;
void push(char c) { stack[++top] = c; }
char pop() { return (stack[top--]); }
int main()
{
    char input_string[30];
    int i, count = 0, length;
    scanf("%s", input_string);
    length = strlen(input_string);
    // Push characters in stack
    for (i = 0; i < length; i++)
        push(input_string[i]);
    for (i = 0; i < length; i++)
    {
        // Compare with original string by popping from stack
        if (input_string[i] == pop())
            count++;
    }
    if (count == length) // Check condition for palindrome
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    return 0;
}