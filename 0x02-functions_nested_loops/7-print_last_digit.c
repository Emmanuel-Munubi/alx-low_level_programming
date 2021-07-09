#include "holberton.h"
/**
* print_last_digit - Prints last digit
* @n : number to check
*
* Description: Print last digit of a number
* Return: returns last digit
*/

int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		n = n * -1;
	}

	l = n % 10;
	_putchar('0' + l);

	return (l);
}
