#include <stdio.h>

int main()
{
    int number ;

    printf("Enter a three digit number: ");
    scanf("%d", &number);

    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int ones = number % 10;

    int result;

    result = hundreds + tens + ones;

    printf("%d", result);

    return 0;
}
