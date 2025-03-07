// Your code here...
#include<stdio.h>
void prime();

int main(){
    // int inputs , n;
    // scanf("%d", &inputs); 
    prime();
    return 0;
}

void prime(){
    int inputs , n;
    scanf("%d", &inputs);
    while(n != inputs){
        scanf("%d", &n);
    } 
    while(n >= 0){
        int result = (n % 1 == 0) && (n % n == 0);
        printf("%d",result);
    }
};

