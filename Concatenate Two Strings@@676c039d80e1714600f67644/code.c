// // Your code here...
#include <stdio.h>

// int main() {
//     char str1[100], str2[100];
//     int i = 0, j = 0;

//     // printf("Enter the first string: ");
//     fgets(str1, sizeof(str1), stdin);

//     // printf("Enter the second string: ");
//     fgets(str2, sizeof(str2), stdin);

//     // Remove newline if present in str1
//     while (str1[i] != '\0') {
//         if (str1[i] == '\n') {
//             str1[i] = '\0';
//             break;
//         }
//         i++;
//     }

//     // Append str2 to the end of str1
//     while (str2[j] != '\0') {
//         if (str2[j] == '\n') break; // Skip newline from fgets
//         str1[i] = str2[j];
//         i++;
//         j++;
//     }

//     str1[i] = '\0';  // Null-terminate the result

//     printf("%s\n", str1);

//     return 0;
// }

#include<string.h>
int main(){
    char str1[200];
    fgets(str1, sizeof(str1), stdin);
    char str2[200];
    fgets(str2, sizeof(str2), stdin);
     // Remove trailing newline if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    char new[200] = strcat(str1, str2);
    puts(new);
    return 0;
}
