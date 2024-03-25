#include <stdio.h>

// Function to find prime factors and their counts
void primeFactorization(int num) {
    printf("Prime factorization of %d: ", num);
    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            printf("%d ", i); // Print the prime factor
            num /= i; // Divide num by i
        }
    }
    printf("\n");
}

int main() {
    int num;

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

    // Find prime factorization
    primeFactorization(num);

    return 0; // Exit with success status
}
