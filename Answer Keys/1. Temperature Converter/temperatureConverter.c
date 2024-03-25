#include<stdio.h>

int main() {
    int choice;
    float intTemp, finalTemp;

    // Clear the console screen
    printf("\e[1;1H\e[2J");

    // Display menu options
    printf("Please select a valid operation:\n");
    printf("(1) Convert Fahrenheit to Celsius\n");
    printf("(2) Convert Celsius to Fahrenheit\n");
    printf("(3) EXIT Program\n");
    printf("\nInput: ");
    scanf("%d", &choice);

    // Perform operation based on user's choice
    if (choice == 1) { // Convert Fahrenheit to Celsius
        printf("\e[1;1H\e[2J");
        printf("Enter Fahrenheit: ");
        scanf("%f", &intTemp);

        finalTemp = (intTemp - 32) * 5 / 9;
    } else if (choice == 2) { // Convert Celsius to Fahrenheit
        printf("\e[1;1H\e[2J");
        printf("Enter Celsius: ");
        scanf("%f", &intTemp);

        finalTemp = (intTemp * 9 /5) + 32;
    } else if (choice == 3) { // Exit Program
        printf("\e[1;1H\e[2J");
        printf("Exiting program...");
        return 0; // Return 0 indicates successful termination
    } else { // Invalid option
        printf("\e[1;1H\e[2J");
        printf("Invalid option, exiting program...");
        return 1; // Return 1 indicates an error
    }

    // Display the result
    printf("Output: %.2f", finalTemp);
    getchar(); // Wait for user input
    return 0; // Return 0 indicates successful termination
}
