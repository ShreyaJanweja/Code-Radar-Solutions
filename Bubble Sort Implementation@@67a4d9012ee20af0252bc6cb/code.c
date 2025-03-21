// #include <stdio.h>
// void bubbleSort(int arr[], int n) {
//     int i, j, temp;
//     for (i = 0; i < n - 1; i++) {
//         int swapped = 0;
//         for (j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap arr[j] and arr[j+1]
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 swapped = 1;
//             }
//         }
//         if (swapped == 0) {
//             break;
//         }
//     }
// }

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
// int main() {
//     int n;
//     scanf("%d", &n);
    
//     int arr[n];
//     // printf("%d", n);
//     for (int i = 0; i < n; i++) {  // Fixed loop syntax
//         scanf("%d", &arr[i]);
//     }
//     // Call Bubble Sort function
//     bubbleSort(arr, n);

//     // Print the sorted array
//     printArray(arr, n);

//     return 0;
// }

#include <stdio.h>

// Function to perform Bubble Sort using pointers
void bubbleSort(int *arr, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) { // Using pointers for swapping
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) break; // Optimization: Stop if already sorted
    }
}

// Function to print the array using pointers
void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i)); // Using pointer notation
    }
    printf("\n");
}

// Main function
int main() {
    int n;

    // Input the size of the array
    // printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Static array allocation

    // Input array elements
    // printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i); // Using pointer notation
    }

    // Call Bubble Sort function
    bubbleSort(arr, n);

    // Print the sorted array
    // printf("Sorted array in ascending order: ");
    printArray(arr, n);

    return 0;
}



