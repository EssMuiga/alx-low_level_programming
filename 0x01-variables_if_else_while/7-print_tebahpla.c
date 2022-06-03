#include <stdio.h>
/**
 * main - print alphabets z to a
 * Return: 0 as successful
 */
int main(void)
{
	char c;
	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
