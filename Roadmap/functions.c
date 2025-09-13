//Function - A function is a block of code which only runs when it is called.

#include <stdio.h>

void myFunction() //void - means that the function does not have a return value , myfunction - is the name of the function
{
    int myNum = 143;
    printf("%d\n", myNum);
}


// Parameters and Arguments
void greetings(char greetings[]) // parameter
{
    printf("%s\n", greetings);
}

int sum(int a, int b)
{   
    return a + b; // return types
}

int main()
{   
    int a = 5;
    int b = 3;
    myFunction(); // calling out functions outside the main
    myFunction();
    myFunction();  // calling out multiple functions

    greetings("Hello World!\n"); // argument

    printf("%d", sum(a, b)); // return types arguments 
}

