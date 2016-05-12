#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
	printf("Please enter a word:\n");
	string s = GetString();

	for (int i = 0; i < strlen(s); i++)
	{
		printf("%c\n", s[i]);
	}
}