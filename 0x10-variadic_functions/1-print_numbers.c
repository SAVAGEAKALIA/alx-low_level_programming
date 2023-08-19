#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
  *print_numbers - print numbers followed by a seperator
  *@separator: separator between numbers
  *@n: unsigned int
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, num;

	va_start(args, n);

		for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);

		printf("%d", num);

		if (separator != NULL && i != n - 1)
		{
		printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
