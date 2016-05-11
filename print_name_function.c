#include <stdio.h>


int main(void)
{
	printf("Give me your name:\n");
	string s = GetString();
	PrintName(s);
}

void PrintName(string name)
{
	printf("Hello, %s\n", name);

	return 0;
}