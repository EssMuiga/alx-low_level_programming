#include "lists.h"
/**
 * sum_dlistint - sums all of the data of a dlistint_t linked list
 * @head: pointer to the beginning of the linked list
 * Return: sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	size_t res = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}

	return (res);
}
