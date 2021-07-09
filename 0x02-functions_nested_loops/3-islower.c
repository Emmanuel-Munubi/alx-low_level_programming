#include "holberton.h"

/**
*_islower - Checks if lowercase
*@c : ascii value of character
*
*Description: checks if a character is lowercase or not.
*Return: Returns (1) if @c is lowercase, returns 0 otherwise
*/

int _islower(int c)
{
	if (c > 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
