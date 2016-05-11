// This program demonstrates how to write a small function that takes 
// an input from GetString() and displays it inside main. 

#include <stdio.h>
#include <cs50.h>


void PrintName(string name);

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