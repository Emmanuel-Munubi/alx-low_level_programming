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
  int *p = (int *)malloc(b);
}
int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}
