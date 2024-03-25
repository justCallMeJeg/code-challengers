#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    // Base case: factorial of 0 and 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursively calculate factorial for n > 1
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Clear the console screen
    printf("\e[1;1H\e[2J");

    // Get user input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if input is negative
    if (num < 0) {
        // Display error message for negative input
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1; // Exit with error status
    }

    // Calculate factorial
    int fact = factorial(num);

    // Display result
    printf("Factorial of %d is %d\n", num, fact);

    return 0; // Exit with success status
}
