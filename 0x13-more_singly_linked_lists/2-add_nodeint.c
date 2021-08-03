#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add nodes at the beggin of a list
 * @head: double pointer
 * @n: value
 *
 * Return: nodo adreess
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
