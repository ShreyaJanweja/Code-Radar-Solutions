// #include <stdio.h>
// int main() {
//     int N;
//     scanf("%d", &N);
//     int i,j;
//     for(i=N;i>=1;i--){
//         for(j=1;i<=j;j++){
//             printf('*');
//         }
//         printf("\n");
//     }
//     return 0;
// }  

#include <stdio.h>

int main() {
    int N;
    
    // Asking the user for the number of rows
    scanf("%d", &N);
    
    // Printing the inverted right-angled triangle
    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
