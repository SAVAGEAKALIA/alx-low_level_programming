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
	int size;
	char *duplicate;

	if (str == NULL)
	{
	return (NULL);
	}

	size = strlen(str);

	duplicate = malloc(sizeof(char) * size);

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
