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
    scanf("%s", str);
    int length = strlen(str);
    printf("%d", length);
    return 0;
}
