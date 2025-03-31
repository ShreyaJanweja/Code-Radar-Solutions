// #include <stdio.h>

// int main() {
//     int N;
//     scanf("%d", &N);

//     for (int i = 1; i <= N; i++) { // Loop for rows
//         // Print spaces
//         for (int j = 1; j <= N - i; j++) {
//             printf(" ");
//         }
//         // Print stars
//         for (int j = 1; j <= (2 * i - 1); j++) {
//             printf("*");
//         }
//         printf("\n"); // Move to the next line after each row
//     }
    
//     return 0;
// }

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i=1; i <=n;i++){
        for(int j=1; j <=n-1; j++){
            printf(" ");
        }
        for(int j=1; j<= (2 * i -1); j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
