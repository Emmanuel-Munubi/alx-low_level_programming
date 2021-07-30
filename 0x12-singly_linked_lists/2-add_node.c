#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: a pointer to a node.
 * @str: string to be duplicated.
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;
	if (new == NULL)
		return (NULL);
	return (new);
}
