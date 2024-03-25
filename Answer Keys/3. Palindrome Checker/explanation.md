# Code Explanation: Palindrome Checker

## Purpose

This C program checks whether a given string is a palindrome or not.

## How it Works

1. **Palindrome Checking Function:**
   - The program defines a function named `isPalindrome` to check whether a given string is a palindrome.
     - It removes non-alphanumeric characters from the string and converts all characters to lowercase.
     - Then, it compares characters from the start and end of the string to check if it's a palindrome.

2. **User Input:**
   - In the `main` function, the program prompts the user to enter a string.
   - The input string is read using `fgets`, which also handles spaces and newline characters.

3. **String Cleaning:**
   - The input string is cleaned by removing non-alphanumeric characters and converting all characters to lowercase.

4. **Palindrome Check:**
   - The cleaned string is passed to the `isPalindrome` function to check if it's a palindrome.
   - The function returns 1 if the string is a palindrome, and 0 otherwise.

5. **Result Display:**
   - The program displays whether the input string is a palindrome or not to the user.

## Flow of Logic

- The program follows a logical flow to achieve its purpose:
  1. Prompt the user to enter a string.
  2. Clean the input string by removing non-alphanumeric characters and converting to lowercase.
  3. Check if the cleaned string is a palindrome using the `isPalindrome` function.
  4. Display the result to the user.

## Why it Works

- The program works by utilizing a function to clean the input string and then checking whether the cleaned string is a palindrome.
- It handles spaces, punctuation, and case-insensitivity while determining palindrome.

## Possible Alternatives

- While this solution effectively checks whether a string is a palindrome, there are alternative approaches and enhancements that could be considered:
  - **Reverse and Compare:** Instead of cleaning the string, reverse the original string and compare it with the original to check for palindrome.
  - **Recursive Approach:** Implement a recursive function to check for palindrome, which may provide a different perspective on solving the problem.
