#include "variadic_functions.h"
/**
 * print_strings - prints string passed to it
 * @separator: strings separator
 * @n: number of string arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *string;

	va_start(args, n);
	while (i < n)
	{
		string = va_arg(args, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
		i++;
	}
	va_end(args);
	printf("\n");
}
