#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return a node calll by an index
 * @head: linked list
 * @index: value
 *
 * Return: node or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		} i++;
		temp = temp->next;
	}
	return (NULL);
}
