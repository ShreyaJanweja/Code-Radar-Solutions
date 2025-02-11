// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int a;
    a=1;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}