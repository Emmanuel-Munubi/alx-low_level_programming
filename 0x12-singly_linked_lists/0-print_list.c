#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: constant pointer of type list_t
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;
	while(h != NULL)
	{
		printf("[%d] %s",h->len, h->str);
		h = h->next;
    	len++;
	}
	return (len);
}