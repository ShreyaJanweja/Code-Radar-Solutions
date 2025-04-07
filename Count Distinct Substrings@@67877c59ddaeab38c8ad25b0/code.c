// Your code here...
#include <stdio.h>
#include <string.h>

int isDuplicate(char substrs[][200], char *substr, int count) {
    for (int i = 0; i < count; i++) {
        if (strcmp(substrs[i], substr) == 0)
            return 1;
    }
    return 0;
}

int main() {
    char str[200];
    char substrs[10000][200]; // Stores all unique substrings
    int count = 0;

    // Read input string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        for (int j = 1; j <= len - i; j++) {
            char temp[200];
            strncpy(temp, str + i, j);
            temp[j] = '\0';

            if (!isDuplicate(substrs, temp, count)) {
                strcpy(substrs[count++], temp);
            }
        }
    }

    // Print distinct substrings
    for (int i = 0; i < count; i++) {
        printf("%s\n", substrs[i]);
    }

    // Print total count
    printf("%d\n", count);

    return 0;
}
