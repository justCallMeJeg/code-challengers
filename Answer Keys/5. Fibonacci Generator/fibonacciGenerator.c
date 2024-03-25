#include <stdio.h>

// Function to generate Fibonacci sequence
void fibonacci(int n) {
    int prev = 0, curr = 1, next;

    printf("Fibonacci Sequence up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d, ", prev);
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    printf("\n");
}

int main() {
    int terms;

    // Clear the console screen
    printf("\e[1;1H\e[2J");

    // Get user input
    printf("Enter the number of terms for Fibonacci sequence: ");
    scanf("%d", &terms);

    // Check if the number of terms is valid
    if (terms <= 0) {
        printf("Error: Please enter a positive integer for the number of terms.\n");
        return 1; // Exit with error status
    }

    // Generate Fibonacci sequence
    fibonacci(terms);

    return 0; // Exit with success status
}
