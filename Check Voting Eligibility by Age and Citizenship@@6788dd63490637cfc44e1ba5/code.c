#include <stdio.h>
int main() {
    int age;
    int status;
    scanf("%d", &age);
    scanf("%d", &status);
    if(age >=18 && status==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}