#include "holberton.h"
/**
* print_sign - print sign
* @n : number to check
*
* Description: prints sign of number if positive neg or zero
* Return: return 0 if zero return 1 if positive return -1 if negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
