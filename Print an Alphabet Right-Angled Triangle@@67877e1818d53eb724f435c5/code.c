// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i=1 ; i<=N;i++){
        char ch;
        ch='A';
        for(j=1;j<=i;j++){
            printf("%c ",ch++);
        }
        printf("\n");
    }
    return 0;
}