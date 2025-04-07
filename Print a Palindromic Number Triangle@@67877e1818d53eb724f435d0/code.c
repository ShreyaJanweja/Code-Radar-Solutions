#include <stdio.h>

int main() {
    int rows, i, j, space;
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        // Print leading spaces
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        // Print ascending numbers
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print descending numbers
        for(j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}

