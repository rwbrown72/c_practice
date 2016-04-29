#include <stdio.h>

int main(void)
{
	int a, b, c, d;

	printf("Enter the first value:");
	scanf("%d", &a);

	printf("Enter the Second value:");
	scanf("%d", &b);

	printf("Enter the Third value:");
	scanf("%d", &c);

	d =	a + b + c;

	printf("%d + %d + %d = %d\n", a, b, c, d);

	return 0;
	
}