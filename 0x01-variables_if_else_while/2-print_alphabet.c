#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* Compiling alphabets */
int main(void)
{
	char ch;

	srand(time(0));
	ch = rand() - RAND_MAX / 2;
	/* your code goes there */
	for (ch = 'a'; ch = 'z'; ch++)
	{
		putchar(ch);
		putchar("\n")
	}
	return (0);
}
