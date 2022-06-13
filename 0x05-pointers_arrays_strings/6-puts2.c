#include <stdio.h>
/**
 * puts2 - function that prints every other character starting with the first
 * @str: the input
 * return: print out
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			putchar(str[i]);
		}
		else
		{
			continue;
		}
		putchar('\n');
	}
}
