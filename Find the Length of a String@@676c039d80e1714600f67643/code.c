// // Your code here...
// #include <stdio.h>

// int main() {
//     char str[100];
//     int length = 0, i = 0;

//     fgets(str, sizeof(str), stdin);  // Reads input with spaces

//     while (str[i] != '\0') {
//         if (str[i] != '\n') {  // Exclude newline from length
//             length++;
//         }
//         i++;
//     }

//     printf("%d\n", length);

//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    fgets(str , 200 , stdin);
    int i =0;
    int count = 0;
    // while(str[i] !)
    int length = strlen(str);
    printf("%d", length);
    return 0;
}
