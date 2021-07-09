#include "holberton.h"

/**
* _puts - prints a string
* @str: string to print
*
* Description: prints a sting followed by new line
* Return: VOID
*/

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
