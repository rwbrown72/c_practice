#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{	
	// This example uses the single quotes to signify a single character and not a string
	// We can then cast the single character into and int and map the numbers and letters
	for (char c = 'A'; c <= 'Z'; c++)
	{
		printf("%i is %c\n", (int) c, c);
	}

	return 0;
}