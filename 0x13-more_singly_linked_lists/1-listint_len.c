#include "lists.h"
/**
 * listint_len - a function that returns the number of elements in the list.
 * @h: list
 * Return: Number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *l = h;
	unsigned int i = 0;

	while (l != NULL)
	{
		i++;
		l = l->next;
	}
	return (i);
}

