#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*string_nconcat - function to concatenate strings
*@s1: Data type
*@s2: Data type
*@n: unsigned integer value
*Return: pointer that terminates at Null
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size, s1_lenght, s2_lenght, j = 0;
	char *result;

	if (s1 == 0)
	return ("");

	if (s2 == 0)
	return ("");

	s1_lenght = strlen(s1);
	s2_lenght = strlen(s2);

	size = s1_lenght + (((n >= s2_lenght) ? s2_lenght : n) + 1);
	result = malloc(sizeof(char) * size);

	if (result == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < s1_lenght; i++)
	{
	result[i] = s1[i];
	}

	for (i = 0; (n < s2_lenght || n >= s2_lenght) &&
i < (((n < s2_lenght) ? n : s2_lenght) + s1_lenght); i++)
	{
	result[s1_lenght + i] = s2[j++];
	}
	result[i] = '\0';
	return (result); }
