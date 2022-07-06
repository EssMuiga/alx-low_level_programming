#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - The function entry point
 * @d: the structure to be freed
 * Return: 0 if successful
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d);
}
