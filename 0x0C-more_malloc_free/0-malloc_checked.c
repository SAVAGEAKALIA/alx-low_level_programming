#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*malloc_checked - return a void pointer
*
*@b: unsigned int
*Return: pointer on success
*/

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
	exit(98);

	return (i);	
}
