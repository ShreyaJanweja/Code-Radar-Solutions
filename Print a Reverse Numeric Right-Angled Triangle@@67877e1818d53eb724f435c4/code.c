#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(i=N;i>=1;i--){
        for(j=1;j<=N;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}