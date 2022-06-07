#include <stdio.h>
<<<<<<< HEAD
#include "main.h"
=======
#include <unistd.h>
#include <main.h>
>>>>>>> 9f47ae2c13567598d985be338da364ce2493ec00
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	int main(void)
{
	printf("_putchar\n");
	return (0);
}
	return (write(1, &c, 1));
}
