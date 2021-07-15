#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
#include <limits.h>
/**
 * *malloc_checked - allocates memmory.
 * @b: varia
 * Return: pointer to the memmoryreserved.
 */
void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (!p)
{
exit(98);
}
return (p);
}
