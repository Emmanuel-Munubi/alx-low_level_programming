#include <stdio.h>

/**
* main - Entry point
*
* Description: print all digits of base16
* Return: 0 on success
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	for (i = 0; i <= 5; i++)
	{
		putchar('a' + i);
	}
	putchar('\n');
	return (0);
}
