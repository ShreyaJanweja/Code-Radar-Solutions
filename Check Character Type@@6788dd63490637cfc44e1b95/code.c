// #include <stdio.h>
// int main() {
//     char type;
//     scanf("%c", &type);
//     if(type>='a' && type<='z'||type>='A' && type<='Z'){
//         if(type =='a'||type =='e'||type=='i'||type=='o'||type=='u'){
//             printf("Vowel");
//         }
//         else if(type == 'A'||type == 'E'||type == 'I'||type == 'O'||type == 'U'){
//             printf("Vowel");
//         }
//         else{
//             printf("Consonant");
//         }
//     }
//     else if(type>='0' && type<='9'){
//         printf("Digit");
//     }
//     else{
//         printf("Special Character");
//     }

//     return 0;
// } 


#include<stdio.h>
int main(){
    char n;
    scanf("%c", &n);
    if(n>='a' && n<='z' || n>='A' && n<='Z'){
        if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u'){
            printf("Vowel");
        }
        else if(n=='A' || n=='E' || n=='I' || n=='O' || n=='U'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(n>='0' && n<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}






