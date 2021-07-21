#include <stdio.h>
#include "holberton.h"

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: a pointer to function that accepts a string as an argument
 */

void print_name(char *name, void (*f)(char *))
{
	unsigned int i;
	void naming()
	{
		while(name[i])
			if(name[i] >= 'a' && name[i] <= 'z')
				putchar(name[i]);
	}
	void (*f)(char *) = &naming;
}
