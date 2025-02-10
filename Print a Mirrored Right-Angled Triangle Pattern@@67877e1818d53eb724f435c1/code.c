// #include <stdio.h>
// int main() {
//     int N;
//     scanf("%d", &N);
//     for(int i=1;i<=N;i++){
//         for(int j=1;j<=i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++){
//             printf("*");
//         }
//         printf("\n");
//         }
//         return 0;
//     }


#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Loop for each row
    for (int i = 1; i <= N; i++) {
        // Print spaces before stars
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print stars for the row
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}

