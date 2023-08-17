#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
  *array_iterator - function
  *@array: array containing elements
  *@size: array size for positive integer
  *@action: pointer to function
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *n;
	size_t i;

	n = malloc(sizeof(int) * size);

	if (n == NULL)
		{return;
		}

			for (i = 0; i < size; i++)
			{
			n[i] = array[i];
			action(n[i]);
			}

			free(n);
}
