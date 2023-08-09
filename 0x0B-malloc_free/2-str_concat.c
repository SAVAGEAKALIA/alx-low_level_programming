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

	int i, s1_length, s2_length, size;
	char *s;

	s1_length = (s1 == NULL) ? 0 : strlen(s1);
	s2_length = (s2 == NULL) ? 0 : strlen(s2);

	size = s1_length + s2_length + 1;

	s = (char *)malloc(sizeof(char) * size);

	if (s == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < s1_length; i++)
	s[i] = s1[i];

	for (i = 0; i < s2_length; i++)
	s[s1_length + i] = s2[i];

	s[s1_length + s2_length] = '\0';

	return (s);
}
