#include "holberton.h"

/**
* print_numbers - Prints numbers.
*
* Description: prints numbers 0 to 9 followed by new line.
* Return: VOID
*/

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return;
}
