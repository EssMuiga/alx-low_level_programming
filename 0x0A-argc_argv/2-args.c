#include <stdio.h>
/**
 * main - Function that prints all arguments it receives
 * @argc: the arguments
 * @argv: array pointing to the arguments
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
