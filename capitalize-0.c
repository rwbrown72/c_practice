#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{	
	string s = GetString();

	for (int i = 0, n = strlen(s); i < n; i++) //Loop over the string from the user
	{
		if (s[i] >= 'a' && s[i] <= 'z') // If the string has lower case values in it
		{
			printf("%c", s[i] - ('a' - 'A')); //print the upper case values
		}
		else 
		{
			printf("%c", s[i]); // Otherwise print the value given
		}
	}

	printf("\n");
}