// #include <stdio.h>
// int main() {
//     int N;
//     scanf("%d", &N);
//     for(int i = 1; i <= N; i++){
//         for(int j = 1; j <= N; j++){
//             if(i == 1 || i == N || j == 1 || j == N){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n")
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int N;
    
    // Asking the user for the size of the square
    scanf("%d", &N);
    
    // Loop to print each row
    for (int i = 1; i <= N; i++) {
        // Loop to print each column in the row
        for (int j = 1; j <= N; j++) {
            // Print '*' if it's on the border
            if (i == 1 || i == N || j == 1 || j == N) {
                printf("*");
            } else {
                // Print space for the interior of the square
                printf(" ");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }
    
    return 0;
}
