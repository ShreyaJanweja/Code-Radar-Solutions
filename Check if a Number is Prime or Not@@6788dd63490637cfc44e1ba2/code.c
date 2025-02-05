#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    for(i=1;i<=a;i++){
        if(i%1==0 && i%a==0){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }
    return 0;
}