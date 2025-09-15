#include <stdio.h>  // Include the standard input/output library

int main()
{
    // Declare and initialize an array of 5 characters (treated as small integers here)
    char num[] = {1, 2, 3, 4, 5};

    // Print each element of the array individually using its index
    printf("%d\n", num[0]);  // Prints the first element: 1
    printf("%d\n", num[1]);  // Prints the second element: 2
    printf("%d\n", num[2]);  // Prints the third element: 3
    printf("%d\n", num[3]);  // Prints the fourth element: 4
    printf("%d\n", num[4]);  // Prints the fifth element: 5

    // Loop through the array and print each element dynamically
    // sizeof(num) gives total bytes in the array
    // sizeof(num[0]) gives size of one element
    // So this calculates the number of elements in the array
    for (int a = 0; a < sizeof(num) / sizeof(num[0]); a++) {
        printf("%d\n", num[a]);  // Prints each element using the loop index
    }

    return 0;  // Exit the program successfully
}