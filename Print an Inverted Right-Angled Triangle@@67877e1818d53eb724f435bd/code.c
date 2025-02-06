#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int i,j;
    for(i=N;i>=1;i--){
        for(j=1;i<=i;j++){
            printf("%c",'*');
        }
        printf("\n");
    }
    return 0;
} 