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
		va_end(args);
		return;
	}

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, const char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
