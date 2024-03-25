#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int len = strlen(str);
    int i, j;

    // Remove non-alphanumeric characters and convert to lowercase
    char cleanStr[len];
    int cleanLen = 0;
    for (i = 0; i < len; i++) {
        if (isalnum(str[i])) { // Check if character is alphanumeric
            cleanStr[cleanLen++] = tolower(str[i]); // Convert to lowercase and add to clean string
        }
    }
    cleanStr[cleanLen] = '\0'; // Null-terminate the clean string

    // Check if clean string is a palindrome
    for (i = 0, j = cleanLen - 1; i < j; i++, j--) {
        if (cleanStr[i] != cleanStr[j]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char str[100];

    // Clear the console screen
    printf("\e[1;1H\e[2J");

    // Get user input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character from input

    // Check if the input string is a palindrome
    if (isPalindrome(str)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
