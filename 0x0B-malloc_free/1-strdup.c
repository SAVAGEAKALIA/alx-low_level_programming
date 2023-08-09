#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*_strdup - function to duplicate
*@str: a pointer to char data type
*
*Return: duplicate on success
*/

char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
	return (NULL);
	}


	duplicate = malloc(sizeof(str) * 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
