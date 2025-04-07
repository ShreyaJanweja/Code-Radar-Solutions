// Your code here...
#include <stdio.h>
int main() {
    char str[200];
    char toReplace, replaceWith;
    int i = 0;

    // Input string
    fgets(str, sizeof(str), stdin);

    // Input character to be replaced
    scanf(" %c", &toReplace);

    // Input replacement character
    scanf(" %c", &replaceWith);

    // Replace characters in the string
    while (str[i] != '\0') {
        if (str[i] == toReplace) {
            str[i] = replaceWith;
        }
        i++;
    }
    printf("%s\n", str);
    return 0;
}
