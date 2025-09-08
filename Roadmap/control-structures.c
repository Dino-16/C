/* Control structures are the building blocks of logic in programming — they determine how and when different parts of your code are executed. */
#include <stdio.h>

int main() 
{
    
    int time = 24;

    if(time > 18) // if statement - to specify a block of code to be executed, if a specified condition is true
    {
        printf("True 1\n");
    } else if (time < 18) // else if -  to specify a new condition to test, if the first condition is false
    {
        printf("True 2\n");
    } else  // else - to specify a block of code to be executed, if the same condition is false
    {
        printf("True 3\n");
    }
    
    // switch - to handle multiple possible values of a single expression

    int day = 3;

    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    default:
        printf("Error\n");
        break;
    }
}