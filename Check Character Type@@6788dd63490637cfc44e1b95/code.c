#include <stdio.h>
int main() {
    char type;
    scanf("%c", &type);
    if(type>='a' && type<='z'||type>='A' && type<='Z'){
        if(type =='a'||type =='e'||type=='i'||type=='o'||type=='u'){
            printf("Vowel");
        }
        else if(type == 'A'||type == 'E'||type == 'I'||type == 'O'||type == 'U'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(type>='0' && type<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }

    return 0;
} 