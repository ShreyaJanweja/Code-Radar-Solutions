#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Shift right by 31 bits to bring the MSB to the LSB position
    int msb = (num >> 31) & 1;

    // Check if MSB is set (1) or not (0)
    if (msb) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
} 
