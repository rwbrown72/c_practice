#include <stdio.h>


// This is a short program that prints a statement. I am learning the
// c programming language while taking the edX course CS50 from Harvard. 
// This program will compile on a Mac using the command 'gcc moving_on.c -o moving_on'.
// The -o outputs the executable to a more readable format rather than a.out. 

int main(void)
{
	printf("I am learning the %c programming language.\n", 'C' );
	printf("I have just completed Chapter %d.\n", 2 );
	printf("I am %.1f percent ready to move on", 99.9 );
	printf("to the next chapter!\n");

	return 0;
}