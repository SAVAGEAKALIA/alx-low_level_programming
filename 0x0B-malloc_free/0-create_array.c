#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*create_array - a function to creat array
*@size: posit integer
*@c: a char type
*
*Return: j on success
*/

char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *j;

	if (size == 0)
{
	return (NULL);
}

	j = malloc(sizeof(char) * (size + 1));

	if (j == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{

	j[i] = c;

	}
	j[i] = '\0';

	return (j);
}
