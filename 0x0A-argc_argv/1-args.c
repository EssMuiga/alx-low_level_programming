#include <stdio.h>
/**
 * main - Function that prints the number of arguments passed to it
 * @argc: the argument count
 * @argv: the aaray pointing to the arguments
 * Return: 0 if successful
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	int a;

	for (a = 0; a < argc; a++)
	{
	}
	printf("%d\n", a - 1);
	return (0);
}
