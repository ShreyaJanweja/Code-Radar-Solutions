// #include<stdio.h>
// int main(){
//     int N;
//     scanf("%d", &N);
//     for(int i = 1;i<=N;i++){
//         for(int j=1;j<=N;j++){
//             if(i==1 || i==N || j==1 || j==N){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j=1; j <= n; j++){
            if(i == 1 || i == n || j == 1 || j == n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}