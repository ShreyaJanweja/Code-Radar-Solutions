#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int i;
    int sum = 0;
    for(i=1;i<=N;i++){
        printf("%d",sum+=i);
    }
    return 0;
}