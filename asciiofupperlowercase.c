#include <stdio.h>

int main() {
    char lowercase = 'a';
    char uppercase = 'A';

    printf("ASCII values of lowercase letters:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", lowercase, lowercase);
        lowercase++;
    }

    printf("\nASCII values of uppercase letters:\n");
    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", uppercase, uppercase);
        uppercase++;
    }

    return 0;
}

