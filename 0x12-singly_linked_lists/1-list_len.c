#include "lists.h"
/**
 * list_len - a function that returns the number of elements in a linked list.
 * @h: constant pointer of type list_t
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	const list_t *_h = h;
	unsigned int n = 0;

	while (_h != NULL)
	{
		_h = _h->next;
		n++;
	}
	return (n);
}

