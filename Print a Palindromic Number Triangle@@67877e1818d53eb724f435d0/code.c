// Your code here...
#include <stdio.h>

int main() {
    int i, j, space, rows;

    // printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        // Print leading spaces
        for(space = 1; space <= rows - i; space++) {
            printf("  "); // two spaces for alignment
        }

        // Ascending numbers
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Descending numbers
        for(j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
