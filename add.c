#include <stdio.h>

int main()
{
    int a, b, c; // initialize a b and c as variables
    a = 5;       // set a's value to 5
    b = 7;       // set b's value to 7
    c = a + b;   // set c's value to a + b

    // Now we can print this simple math problem to the screen using printf
    // We will use %d format specifier is used to take arguments from the printf
    // function. The %d is a signed decimal integer. 

    printf("%d + %d = %d\n", a, b, c);  
    return 0;
}