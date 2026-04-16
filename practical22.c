#include <stdio.h>
#include <string.h>
#include <ctype.h> // Useful for tolower()

int main() {
    char str[200];
    int i, len, vowels = 0, words = 0, isPalindrome = 1;

    printf("Enter a line of text: ");
    // Using fgets to allow spaces in the input
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character added by fgets
    str[strcspn(str, "\n")] = 0;

    len = strlen(str);

    // 1. Palindrome Check
    for (i = 0; i < len / 2; i++) {
        if (tolower(str[i]) != tolower(str[len - 1 - i])) {
            isPalindrome = 0;
            break;
        }
    }

    // 2. Vowel and Word Count
    for (i = 0; i < len; i++) {
        char c = tolower(str[i]);

        // Count Vowels
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++;
        }

        // Count Words (based on spaces)
        // A word starts if current char is not space and (it's the first char or previous char was a space)
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            words++;
        }
    }

    printf("\n--- Results ---");
    printf("\nPalindrome: %s", isPalindrome ? "Yes" : "No");
    printf("\nVowels:     %d", vowels);
    printf("\nWords:      %d\n", words);

    return 0;
}