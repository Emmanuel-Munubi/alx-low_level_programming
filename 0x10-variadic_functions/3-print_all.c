#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	va_list list;
	va_start(list, format);
	unsigned int i = 0;
	const char *separator = ", ";

	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, char));
			break;
		case 'f':
			printf("%f", va_arg(list, float));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 's':
			if (format[i] != NULL)
				printf("%s", va_arg(list, char *));
			else
				printf("(nil)");
			break;
		default:
			break;
		}
		printf("%s", separator);
		i++;
	}

	va_end(list);
}

int main(void)
{
    print_all("ceis", 'H', 0, "lberton");
    return (0);
}