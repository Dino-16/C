#include <stdio.h>  // Standard I/O library for printf and other functions

int main()
{
    // Declare and initialize two arrays of type char
    // These are treated as small integers for simplicity
    char num1[] = {1, 2, 3, 4, 5};      // First array with 5 elements
    char num2[] = {11, 22, 33, 44, 55}; // Second array with 5 elements

    // Print specific paired elements manually (index-based)
    // This shows how individual elements from both arrays can be combined
    printf("%d%d\n", num1[0], num2[0]);  // Outputs: 1111
    printf("%d%d\n", num1[1], num2[1]);  // Outputs: 2222
    printf("%d%d\n", num1[2], num2[2]);  // Outputs: 3333
    printf("%d%d\n", num1[3], num2[3]);  // Outputs: 4444

    // Nested loop to print all combinations of num1[i] and num2[j]
    // Outer loop iterates through each element in num1
    for (int i = 0; i < sizeof(num1) / sizeof(num1[0]); i++) {
        // Inner loop iterates through each element in num2
        for (int j = 0; j < sizeof(num2) / sizeof(num2[0]); j++) {
            // Print the current combination of num1[i] and num2[j]
            printf("%d%d\n", num1[i], num2[j]);
        }
    }

    return 0; // Exit the program successfully
}