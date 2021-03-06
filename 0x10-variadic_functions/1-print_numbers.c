#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Function printing numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to function
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}
	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, const unsigned int));
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}
