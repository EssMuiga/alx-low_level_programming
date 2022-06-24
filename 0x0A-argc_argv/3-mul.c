#include <stdio.h>
/**
 * main - Function that multiplies two numbers
 * atoi function that converts a tring to integer
 * @argc: the arguments
 * @argv: the array pointing to arguments
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	int i, j, res;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		res = i * j;
	
		printf("%d\n", res);
		return (0);
	}
}
