#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - allocates memmory.
 * @b: number of bytes for memmory allocation
 * Return: pointer to the memmoryreserved.
 */
void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
