#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
	printf("Please enter a word:\n");
	string s = GetString();
	if (s != NULL)
	{
		for (int i = 0, n = strlen(s); i < n; i++)
		{
			printf("%c\n", s[i]);
		}
	}
		
}