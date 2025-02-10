#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i = 1;i<=N;i++){
        for(j=1;j<=N;j++){
            if(int i==1 || i==N || j==1 || j==N){
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
