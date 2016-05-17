#include <stdio.h>
#include <cs50.h>
#include <string.h>

float mult_float(float a, float b);

int main(int argc, string argv[])
{	
	for (int i = 0; i < argc; i++)
	{
		for (int j = 0, n = strlen(argv[i]); j < n; j++)
		{
			printf("%c\n", argv[i][j]);
		}
	}
	printf("please give me a float:");
	float x = GetFloat();
	printf("please give me another float:");
	float y = GetFloat();

	printf("The mult_float is %f.3\n", mult_float(x, y));

}

float mult_float(float a, float b)
{
	float product = a * b;
	return product;
}