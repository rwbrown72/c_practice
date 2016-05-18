#include <stdio.h>
#include <cs50.h>
#include <string.h>

int valid_triangle(int a, int b, int c);

int main(int argc, string argv[])
{	
	int a;
	int b;
	int c;

	printf("Is your triangle valid?\n");

	do 
	{
		printf("What is the length of side \"a\" of the triangle: \n");
		a = GetInt();
		printf("What is the length of side \"b\" of the triangle: \n");
		b = GetInt();
		printf("What is the length of side \"c\" of the triangle: \n");
		c = GetInt();

	} while (a < 1 || b < 1 || c < 1);

	int valid_triangle(int a, int b, int c);

	int t = (int) valid_triangle;

	if (t < 1)
	{
		printf("Your Triangle is valid.\n");
	}
	else 
	{
		printf("Your Triangle is invalid. \n");
	}
}

int valid_triangle(int a, int b, int c)
{
	if ( ((a+b) <= c) || ((a+c) <= b) || ((b+c) <= a))
	{
		return 1;
	}
	else 
	{
		printf("returning 0\n");
		return 0;
	}
}