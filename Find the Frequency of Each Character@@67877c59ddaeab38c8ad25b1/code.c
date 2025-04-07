// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int freq[256] = {0}; // Array to count frequency of all ASCII characters

    // Read the string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline if present

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Output each character and its frequency (in input order)
    int printed[256] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (!printed[ch]) {
            printf("%c: %d\n", ch, freq[ch]);
            printed[ch] = 1;
        }
    }

    return 0;
}
