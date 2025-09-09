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

    int i = 0;
    
    // While loop - loops through a block of code as long as a specified condition is true:
    while(i < 5) {
        printf("%d\n", i);
        i++;
    }


    int j = 0;

    //Do while loop - The do/while loop is a variant of the while loop.
    //This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.
    do {
        printf("%d\n", j);
        j++;
    } while(j < 5);

    int myNum = 5;
    
    //For loop -  allows you to repeat a block of code a specific number of times.
    for(int k = 0; k < myNum; k++) {
        printf("%d\n", k);
    }
}