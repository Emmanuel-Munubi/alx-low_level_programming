#include "holberton.h"
/**
 * _puts_recursion - Puts next character in a string until null charcater.
 * @s: string to print
 *
 * Return: Void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else if (*s == '\0')
	{
		_putchar('\n');
	}
}
