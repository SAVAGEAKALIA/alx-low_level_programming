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
	size_t i;
			for (i = 0; i < size; i++)
			{
			action(array[i]);
			}
}
