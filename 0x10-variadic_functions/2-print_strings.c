#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
  *print_strings - function to print strings
  *@separator: separator for strings
  *@n: integer count
  *
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
		unsigned int i;
	const char *string;

	va_start(args, n);

	if (n == 0)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, const char *);

		if (string == NULL)
		{
			printf("(nil)");
		}

		if (separator == NULL)
		{
			va_end(args);
			return;
		}

		printf("%s%s", string, i < n - 1 ? separator : "");
	}

	printf("\n");

	va_end(args);
}
