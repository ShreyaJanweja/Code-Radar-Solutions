#include <stdio.h>
int main() {
    int a,b,c;
    float Average;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    Average = (a+b+c)/3.0;
    printf("Average: %.2f\n",Average);
    return 0;
} 