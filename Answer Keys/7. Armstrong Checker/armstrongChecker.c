#include <stdio.h>
#include <math.h>

// Function to count the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int n = countDigits(num); // Get the number of digits
    int sum = 0;

    // Calculate the sum of digits raised to the power of the number of digits
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    // Check if the sum is equal to the original number
    return (sum == originalNum);
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

    // Check if the input number is an Armstrong number
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0; // Exit with success status
}
