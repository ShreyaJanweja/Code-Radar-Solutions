#include <stdio.h>
int main() {
    int a;
    int b;
    char c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    switch(c){
        case '+' : printf("%d",a+b);
        break;
        case '-' : printf("%d",a-b);
        break;
        case '*' : printf("%d",a*b);
        break;
        case '/' : printf("%d",a/b);
        break;
        default : printf("Invalid");
    } 

    return 0;
}