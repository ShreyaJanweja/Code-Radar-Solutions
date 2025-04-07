// Your code here...
#include <stdio.h>

int main() {
    int rows, i, j, num = 1;
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        int start = num;

        // Calculate numbers for this row
        for(j = 1; j <= i; j++) {
            num++;
        }

        if(i % 2 == 0) {
            // Even row: print in reverse
            for(j = num - 1; j >= start; j--) {
                printf("%d ", j);
            }
        } else {
            // Odd row: print normally
            for(j = start; j < num; j++) {
                printf("%d ", j);
            }
        }

        printf("\n");
    }

    return 0;
}
