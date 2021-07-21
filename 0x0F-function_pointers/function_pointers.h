#ifndef _FUNCTION_POINTERS_
#define _FUNCTION_POINTERS_
#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
int putchar(const char *string);
#endif
