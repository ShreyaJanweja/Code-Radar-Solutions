#include <stdio.h>
int main() {
    int costPrice;
    int sellingPrice;
    scanf("%d", &costPrice);
    scanf("%d", &sellingPrice);
    if(sellingPrice > costPrice){
        printf("Profit");
    }
    else if(sellingPrice < costPrice){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
} 