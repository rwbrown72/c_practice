// This is a program to get a positive int and print out
// the results to the screen. We will use a while loop to get the 
// positive integer. This is from the week 2 Walkthroughs of CS50 

#include <stdio.h>
#include <cs50.h>


int GetPositiveInt();

int main(void)
{
	int n = GetPositiveInt();
	printf("Thanks for the %i!\n", n);

	return 0;
}

int GetPositiveInt(void)
{
	int n;
	do
	{
		printf("Please give me a positive int: ");
		n = GetInt();

		if (n < 50) 
		{
			printf("Int must be greater than 0. Please try again.\n");
		}
	}
	while (n < 1);

	return n;
}