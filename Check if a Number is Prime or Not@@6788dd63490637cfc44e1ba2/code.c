#include <stdio.h>
int main() {
    int a;
    a>0;
    scanf("%d", &a);
    for(int i=1;i<=a;i++){
        if(i%1==0 && i%a==0){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }
    return 0;
}