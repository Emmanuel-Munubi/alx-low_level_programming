#include <stdio.h>
#include "holberton.h"

/**
 * naming - naming - uses putchar to print the string
 */
void naming(void)
{
	unsigned int i;

	while (name[i])
		if (name[i] >= 'a' && name[i] <= 'z')
			putchar(name[i]);
}
/**
 * print_name - prints a name
 * @name: name of the person
 * @f: a pointer to function that accepts a string as an argument
 */
void print_name(char *name, void (*f)(char *))
{
	void (*f)(char *) = &naming;
}
