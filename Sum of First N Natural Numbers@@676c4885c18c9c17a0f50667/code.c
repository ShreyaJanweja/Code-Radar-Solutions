#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int i;
    int sum = 0;
    for(i=1;i<=N;i++){
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}