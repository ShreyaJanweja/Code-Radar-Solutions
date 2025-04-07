#include <stdio.h>

int main() {
    int rows, i, j, val;
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        // Decide starting value for the row
        if(i % 2 == 0)
            val = 0;
        else
            val = 1;

        for(j = 1; j <= i; j++) {
            printf("%d ", val);
            val = 1 - val; // Toggle between 1 and 0
        }

        printf("\n");
    }

    return 0;
}

