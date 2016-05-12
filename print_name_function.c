// This program demonstrates how to write a small function that takes 
// an input from GetString() and displays it inside main. 

#include <stdio.h>
#include <cs50.h>
#include <string.h>

void PrintName(string name);

int main(void)
{
	printf("Give me your name:\n");
	string s;
	do 
	{
		s = GetString();
		printf("Your name is required. Please try again.\n");
	}
	while (strlen(s) == 0);
	PrintName(s);
}

void PrintName(string name)
{
	printf("Hello, %s\n", name);
}