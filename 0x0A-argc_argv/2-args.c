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
int count;
if (argc > 1)
{
for (count = 1; count < argc; count++)
{
printf("%s\n", argv[count]);
}
}
else
{
printf("the command had no other arguements.\n");
}
return (0);
}
