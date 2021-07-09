#include <stdio.h>

/**
* main - Entry point
*
* Description: runs script to print bacward alphabet
* Return: return 0 on success
*/

int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
