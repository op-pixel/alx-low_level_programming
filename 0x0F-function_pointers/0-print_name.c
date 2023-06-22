#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: pointer to the function that will print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
