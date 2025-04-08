// Your code here...
#include <stdio.h>
#include <string.h>

// Function to perform selection sort on an array of strings
void selectionSort(char arr[][100], int n) {
    int i, j, min_idx;
    char temp[100];

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[min_idx]) < 0) {
                min_idx = j;
            }
        }

        // Swap arr[i] and arr[min_idx] if needed
        if (min_idx != i) {
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[min_idx]);
            strcpy(arr[min_idx], temp);
        }
    }
}

// Function to print each string in a new line
void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);  // ✅ Each string on a new line
    }
}
