#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

// This example uses the ctype.h header to bring in the islower() function and the toupper() function

int main(void)
{	
	string s = GetString();

	for (int i = 0, n = strlen(s); i < n; i++)
	{
		if (islower(s[i]))
		{
			printf("%c", toupper(s[i]));
		}
		else
		{
			printf("%c", s[i]);
		}
	}
	printf("\n");
}