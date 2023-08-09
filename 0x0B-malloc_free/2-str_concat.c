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

	int s1_length, s2_length, size;
	char *s;

	if (s1 == NULL)
	{
	return ("");
	}

	if (s2 == NULL)
	{
	return ("");
	}

	s1_length = (s1 == NULL) ? 0 :strlen(s1);
	s2_length = (s2 == NULL) ? 0 :strlen(s2);
	size = s1_length + s2_length + 1;

	s = (char *)malloc(sizeof(char) * size);

	if (s == NULL)
	{
	return (NULL);
	}

	if (s1 != NULL)
	strcpy(s, s1);

	if (s2 != NULL)
	strcat(s, s2);

	return (s);
}
