#include <stdio.h>

int main()
{
    // A variable is like a label for a value. It can be a name, a letter, etc., but not a reserved keyword.
    // Variable naming can use camelCase, under_score, or PascalCase.
    // Note: kebab-case (like my-variable) is not allowed in C because hyphens are interpreted as minus signs.

    char myFirstProgram[] = "Hello World!";
    
    int my_number = 12345678;

    // NewLine is to break the line - \n

    printf("%s\n", myFirstProgram);
    printf("%d", my_number);
    return 0;
}