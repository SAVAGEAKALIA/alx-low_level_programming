#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *int_index - Print the index of the first array
  *@array: array pointer to integer
  *@size: array size
  *@cmp: function pointer
  *Return: return i on success
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (0);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
		return (i);
		}
	}
		return (-1);
}
