// Your code here...
#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i=1;i<=N;i++){
        char ch;
        ch = 'A';
        for(int j=N; j>=i;j--){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}