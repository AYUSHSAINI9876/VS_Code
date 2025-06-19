#include <stdio.h>

int main() {
    int current, previous = -1;
    int maxLength = 0, currentLength = 0;

    printf("Enter a sequence of positive integers (terminate with 0):\n");

    while (1) {
        scanf("%d", &current);

        if (current == 0) {
            break;
        }

        if (current >= previous) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
            }
            currentLength = 1;
        }

        previous = current;
    }

    if (currentLength > maxLength) {
        maxLength = currentLength;
    }

    printf("Maximum length of non-decreasing subsequences: %d\n", maxLength);

    return 0;
}

