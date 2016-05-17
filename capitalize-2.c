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
		printf("%c", toupper(s[i]));
	}
	printf("\n");
}