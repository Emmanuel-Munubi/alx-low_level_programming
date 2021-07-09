#include "holberton.h"

/**
* print_most_numbers - Prints numbers exluding 2 and 4
*
* Description: prints numbers 0 to 9 excluding 2 and 4.
* Return: VOID
*/

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
