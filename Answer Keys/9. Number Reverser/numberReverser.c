#include <stdio.h>

// Function to reverse a number
int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit; // Add digit to reversedNum after shifting it left by one decimal place
        num /= 10; // Remove the last digit from num
    }
    return reversedNum;
}

int main() {
    int num, reversedNum;

    // Clear the console screen
    printf("\e[1;1H\e[2J");

    // Get user input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the input is valid
    if (num <= 0) {
        printf("Error: Please enter a positive integer.\n");
        return 1; // Exit with error status
    }

    // Reverse the number
    reversedNum = reverseNumber(num);

    // Display the reversed number
    printf("Reversed number: %d\n", reversedNum);

    return 0; // Exit with success status
}
