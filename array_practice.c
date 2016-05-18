// This is a practice problem to add numbers to an array and then show the index position of the numbers using a loop.
// This was writtien by Russell Brown
// http://Russell Brown

#include <stdio.h>
#include <cs50.h>
#include <string.h>


int index_numbers[100];

int main(int argc, string argv[])
{	
	for (int i = 0; i < 100; i++)
	{
		int x = i;
	 	index_numbers[i] = x; 
	}

	for (int j = 0; j < 100; j++)
	{
		printf("The index of the %i position in the array is %i:\n", index_numbers[j] + 1, index_numbers[j] );
	}
}
