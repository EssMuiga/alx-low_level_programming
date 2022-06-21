#include <stdio.h>
/**
 * _puts_recursion - Function that prints a recursive string
 * @s: the string
 * Return: 0 if successful
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
