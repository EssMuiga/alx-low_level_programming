#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - Function that prints all elements of list_t
 * @h: the pointer to the list_t to print
 * Return: the number of printed nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0,8 "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
