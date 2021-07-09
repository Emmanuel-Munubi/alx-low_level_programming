#include "holberton.h"
/**
* _isupper - Checks uppercase character
* @c: Character to be tested
*
* Description: Checks if a char is uppercase or not
* Return: 1 on uppercase, 0 otherwise.
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
