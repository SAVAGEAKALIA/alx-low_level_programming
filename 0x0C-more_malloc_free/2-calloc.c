#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_calloc - Function to intialize array to 0
*@nmemb: Data type
*@size: Data type
*Return: return s on success
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *s;

	if (nmemb == 0)
	return (NULL);

	if (size == 0)
	return (NULL);

	s = malloc(sizeof(nmemb) * size);

	if (s == NULL)
	return (NULL);

	memset(s, 0, sizeof(*s));

	return (s);
}
