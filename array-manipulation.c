#include <stdio.h>

int main() {
    // Initialize an array of integers
    int numbers[] = {12, 45, 23, 67, 34, 89, 23};
    int size = sizeof(numbers) / sizeof(numbers[0]);  // Calculate array size
    int searchValue = 23;
    int foundIndex = -1;

    // Print original array
    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Search for the value in the array
    for (int i = 0; i < size; i++) {
        if (numbers[i] == searchValue) {
            foundIndex = i;
            break;  // Stop at first match
            
        }
    }

    // Output result
    if (foundIndex != -1) {
        printf("Value %d found at index %d\n", searchValue, foundIndex);
    } else {
        printf("Value %d not found in the array\n", searchValue);
    }

    // Modify an element (e.g., change index 2 to 99)
    numbers[2] = 99;
    printf("Modified array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}