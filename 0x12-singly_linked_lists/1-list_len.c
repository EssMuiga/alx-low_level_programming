#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - Function that returns the number
 * @h: input
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
