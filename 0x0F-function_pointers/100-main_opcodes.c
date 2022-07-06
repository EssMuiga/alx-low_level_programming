#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - prints the opcodes
 * @a: address of main
 * @n: number of bytes
 * REturn: void
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2x", a[i]);
		if (i < n - 1)
		{
			printf(" ");
		}
		printf("\n");
	}
}
/**
 * main - prints the opcodes
 * @argc: argument count
 * @argv: array or arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
