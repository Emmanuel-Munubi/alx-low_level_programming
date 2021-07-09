#include "holberton.h"
/**
* print_alphabet_x10 - Print alphabet 10x
*
* Description: Prints alphabet 10 times.
* Return: void
*/

void print_alphabet_x10(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
	return;
}
