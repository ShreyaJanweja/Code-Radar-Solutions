#include <stdio.h>
int main() {
    char grade;
    scanf("%c", &grade);
    if(grade == 'A'){
        printf("Excellent");
    }
    else if(grade == 'B'){
        printf("Good");
    }
    else if(grade == 'C'){
        printf("Average");
    }
    else if(grade == 'D'){
        printf("Below Average");
    }
    else{
        printf("Fail");
    }
    return 0;
}