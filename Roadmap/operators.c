// Operators - are used to perform operations on a variables and values

#include <stdio.h>

int main()
{
    /* Arithmetic Operators ("+" addition, "-" subtraction, "*" multiplication, "/" division,
                         "%" modulus, "++" increment, "--" decrement) */

    int a = 5;
    int b = 3;

    int sum = a + b; // declaring another variable to display the result of a and b

    printf("%d\n", sum);

    // direct applying the operators
    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);

    // incrementing the value of a
    a++; //increment(increased) the value by 1
    printf("%d\n", a);

    b++; //decrement(decreased) the value by 1
    printf("%d\n", b);

    // Assignment Operators - are used to assign values to variables

    int c = 3;
    c += 5; // add a number to the right hand value (same as c = c + 5;)
    printf("%d\n", c);

    int d = 3;
    d -= 2; // subtract a number to the right hand value (same as d = d - 5;)
    printf("%d\n", d);

    int e = 3;
    e *=  3; // multiply a number to the right hand value (same as e = e * 5;)
    printf("%d\n", e);

    int f = 5;
    f /= 5; // divide a number to the right hand value (same as f = f / 5;)
    printf("%d\n", f);

    int g = 8;
    g %= 5; // remainder a number to the right hand value (same as g = g % 5;)
    printf("%d\n", g);


    /*Comparison Operators - are used to compare two values (or variables)
                            { > greater than, < less than, == equal to, != not equal, >= less than or equal to,
                            <= greater than or equal to } */

    int h = 5;
    int i = 10;

    printf("%d\n", h > i); // the result is false (0) because the greater than is 5 not 10
    printf("%d\n", h < i); // the result is true (1) because 5 is less than 10
    printf("%d\n", h == i); // the result is false (0) because the equal to value is not same
    printf("%d\n", h != i); // the result is true (1) because 5 is not equal to 10
    printf("%d\n", h >= i); // the result is false (0) because the greater than or equal to is 5 not 10
    printf("%d\n", h <= i); // the result is false (0) because 5 is less than or equal to 10


    /* Logical Operators - are used to determine the logic between variables or values, by combining multiple conditions
                            && - AND (x < 5 &&  x < 10)	Returns 1 if both statements are true
                            || - OR	(x < 5 || x < 4)	Returns 1 if one of the statements is true
                            ! -	NOT or Negation	(!(x < 5 && x < 10))	Reverse the result, returns 0 if the result is 1 */

    int j = 5;
    int k = 3;

    printf("%d\n", j > k && k < j); // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
    printf("%d\n", j > k || k < j); //  Returns 1 (true) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)
    printf("%d\n", !(j > k && k < j)); // Returns false (0) because ! (not) is used to reverse the result


    /* Bitwise operators in C are used to manipulate data at the binary level — meaning they operate directly on the bits (0s and 1s) of integers. */

    unsigned int l = 5;   // Binary: 00000101
    unsigned int m = 9;   // Binary: 00001001

    printf("l & m = %u\n", l & m);   // → 00000001 → 1
    printf("l | m = %u\n", l | m);   // → 00001101 → 13
    printf("l ^ m = %u\n", l ^ m);   // → 00001100 → 12

    return 0;
} 
