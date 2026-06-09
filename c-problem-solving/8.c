#include <stdio.h>

int main()
{
    int year;
    int leapyear;

    printf("Enter a year: ");
    scanf("%d", &year);

    if(year % 4 == 0 && year % 100 != 0 || (year % 400 == 0)) {
        printf("it is leap year");
    } else {
        printf("not leap year");
    }

    return 0;
}
