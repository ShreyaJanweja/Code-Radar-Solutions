// Your code here...
#include <stdio.h>
#include <string.h>

void isPalindrome(char str[]) {
    int len = strlen(str);
    int i, flag = 1;

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Yes\n");
    else
        printf("No\n");
}

int main() {
    char str[100];

    // printf("Enter a string: ");
    scanf("%s", str);  // Takes input without spaces

    isPalindrome(str);

    return 0;
}
