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

// Function to perform Bubble Sort
void bubbleSort(int *arr, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) break;
    }
}

// Function to print the array
void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

// ✅ Only one main function
int main() {
    int n;
    // printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    bubbleSort(arr, n);

    // printf("Sorted array in ascending order: ");
    printArray(arr, n);

    return 0;
}




