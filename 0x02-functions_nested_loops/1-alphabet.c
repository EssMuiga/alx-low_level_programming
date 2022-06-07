#include <stdio.h>
/* 
*Printing alphabets in lowercase
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
}
