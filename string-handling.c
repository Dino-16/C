#include <stdio.h>

int main()
{
    // Declare and initialize a character array with the string "Dinosaur"
    // The compiler automatically adds a null terminator '\0' at the end
    char name[] = "Dinosaur";

    // Print each character of the string individually using array indexing
    // This demonstrates how strings are stored as arrays of characters in C

    printf("%c\n", name[0]); // Prints 'D' - first character
    printf("%c\n", name[1]); // Prints 'i' - second character
    printf("%c\n", name[2]); // Prints 'n' - third character
    printf("%c\n", name[3]); // Prints 'o' - fourth character
    printf("%c\n", name[4]); // Prints 's' - fifth character
    printf("%c\n", name[5]); // Prints 'a' - sixth character
    printf("%c\n", name[6]); // Prints 'u' - seventh character
    printf("%c\n", name[7]); // Prints 'r' - eighth character

    // Note: name[8] would be '\0', the null terminator, which marks the end of the string

    return 0;
}