#include <stdio.h>

int main(void) {
    char value;

    printf("Enter a character: ");
    scanf(" %c", &value);

    printf("The ASCII of the character %c is %d\n", value, value);

    return 0;
}
