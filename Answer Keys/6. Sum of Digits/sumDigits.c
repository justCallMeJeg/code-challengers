#include <stdio.h>

// Function to calculate the sum of digits
int sumOfDigits(int num) {
    int sum = 0;

    // Iterate through each digit of the number
    while (num > 0) {
        sum += num % 10; // Add the last digit to sum
        num /= 10; // Remove the last digit
    }

    return sum;
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

    // Calculate the sum of digits
    int sum = sumOfDigits(num);

    // Display the result
    printf("Sum of digits of %d is %d\n", num, sum);

    return 0; // Exit with success status
}
