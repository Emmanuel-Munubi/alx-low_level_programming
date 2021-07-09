#include <stdio.h>

/**
* main - Entry point for script
*
* Description: main function to run script.
* Return: Success returns 0.
*/

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
