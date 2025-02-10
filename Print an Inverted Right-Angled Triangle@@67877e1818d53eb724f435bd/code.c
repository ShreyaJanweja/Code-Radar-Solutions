#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int i,j;
    char '*';
    for(i=N;i>=1;i--){
        for(j=1;i<=j;j++){
            printf("%c",'*');
        }
        printf("\n");
    }
    return 0;
} 