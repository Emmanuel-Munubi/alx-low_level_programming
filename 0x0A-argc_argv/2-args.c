#include <stdio.h>
#include "holberton.h"
/**
* main - main
* @argc: counts the number of commandline arguments
* @argv: array of commands (strings as elemnts)
*Description:
*Return: 0
*/
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
