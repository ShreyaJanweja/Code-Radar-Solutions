// // Your code here...
// void bubbleSort(int arr[], int n);
// void printArray(int arr[], int n);
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = 0, i < n , i++){
//         scanf("%d", &arr[i]);
//     }
//     bubbleSort(arr,n);
//     printArray(arr,n);
//     return 0;
// }
// int bubbleSort(int arr , int n){

// }


#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        // Flag to check if swapping happened
        int swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        // If no swapping happened, array is already sorted
        if (swapped == 0) {
            break;
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int n;
    
    // Input the size of the array
    scanf("%d", &n);
    
    int arr[n];

    // Input array elements
    // printf("%d", n);
    for (int i = 0; i < n; i++) {  // Fixed loop syntax
        scanf("%d", &arr[i]);
    }

    // Call Bubble Sort function
    bubbleSort(arr, n);

    // Print the sorted array
    printArray(arr, n);

    return 0;
}

