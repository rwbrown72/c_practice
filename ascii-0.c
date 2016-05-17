#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{	
	// This loop will start at capital A and print all the letters mapped to their ascii numbers
	for  (int i = 65; i < 65 + 26; i++)
	{
		printf("%i is %c\n", i, (char) i); // We care casting the "i" variable to a char in this line
	}

	return 0;
}