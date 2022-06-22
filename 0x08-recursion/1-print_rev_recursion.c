#include <stdio.h>
/**
 * _print_rev_recursion - Function that prints a string in reverse
 * @s: the character string to be reversed
 * Return: 0 if successful
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	else
	{
		return;
	}
	putchar(*s);
}
