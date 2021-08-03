#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list.
 * @head: node to be added
 * @n: int data part
 * Return: Always 0.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));

	new->next = *head;
	*head = new;

	return (*head);
}

