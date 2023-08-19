#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  *print_strings - function to print strings
  *@separator: separator for strings
  *@n: integer count
  *@...: A variable number of strings to be printed.
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *string;
	unsigned int i;

	va_start(args, n);

	if (n == 0)
	{
		va_end(args);
		return;
	}

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char*);

		if (string == NULL)
		printf("(nil)");

		else
			printf("%s", string);

		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
