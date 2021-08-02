#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: list
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *l = h;
	unsigned int i = 0;

	if (l == NULL)
		return (1);
	while (l != NULL)
	{
		printf("%d\n", l->n);
		i++;
		l = l->next;
	}
	return (i);
}

