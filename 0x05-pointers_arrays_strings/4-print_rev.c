#include <stdio.h>
/**
 * print_rev - function that prints in reverse a string
 * @s: the value being considered
 * return: 0 if successful
 */
void print_rev(char *s)
{

	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		for (len = len - 1; len >= 0; len--)
		{
			putchar(s[len]);
		}
		putchar('\n');
	}
}
