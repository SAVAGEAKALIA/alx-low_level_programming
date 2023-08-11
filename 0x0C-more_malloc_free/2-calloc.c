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

	if (nmemb == 0 || size == 0)
	return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
	return (NULL);

	memset(s, 0, nmemb * size);

	return (s);
}
