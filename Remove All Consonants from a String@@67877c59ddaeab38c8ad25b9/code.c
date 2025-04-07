// Your code here...
#include <stdio.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[1000], result[1000];
    int i = 0, j = 0;

    // Read the string (including spaces)
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char ch = str[i];
        if (!isalpha(ch) || isVowel(ch)) {
            result[j++] = ch;
        }
        i++;
    }

    result[j] = '\0'; // Null terminate the result string

    printf("%s", result);

    return 0;
}