#include <stdio.h>      // Includes standard input/output functions
#include <string.h>     // Includes string manipulation functions like strcat, strcpy, strlen, strcmp

int main()
{
    // Initialize two character arrays (strings)
    char name[] = "John";     // First name
    char lname[] = "Doe";     // Last name
    char str1[10];            // Empty string to copy lname into

    // Concatenate lname to name → modifies 'name' to become "JohnDoe"
    // ⚠️ Risk: 'name' only has space for 5 characters ("John" + '\0'), so strcat may cause buffer overflow
    strcat(name, lname);

    // Copy lname ("Doe") into str1 → str1 becomes "Doe"
    strcpy(str1, lname);

    // Print the length of the modified 'name' string ("JohnDoe" → 7 characters)
    printf("%zu\n", strlen(name));

    // Print the full concatenated name
    printf("%s\n", name);

    // Print the copied last name
    printf("%s\n", str1);

    // Compare 'name' ("JohnDoe") and 'lname' ("Doe")
    // Returns:
    //   0 if equal
    //   <0 if name < lname
    //   >0 if name > lname
    printf("%d", strcmp(name, lname));

    return 0;
}