#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
*str_concat - funtion to concanate
*@s1: Data string 1
*@s2: Data string 2
*Return: return s on success
*/

char *str_concat(char *s1, char *s2)
{
	int s1_length = strlen(s1);
	int s2_length = strlen(s2);
	int size = (s1_length + s2_length + 1);
	char *s = malloc(sizeof(char) * size);

	if (s1 == NULL)
	{
	return ("");
	}

	if (s2 == NULL)
	{
	return ("");
	}

	if (s == NULL)
	{
	return (NULL);
	}


	strcpy(s, s1);
	strcat(s, s2);

	return (s);
}
