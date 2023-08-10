#include "main.h"
#include <stdio.h>
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
	unsigned int i, size, s1_lenght, s2_lenght;
	char *result;

	s1_lenght = (s1 == 0) ? 0 : strlen(s1);
	s2_lenght = (s2 == 0) ? 0 : strlen(s2);

	size = s1_lenght + s2_lenght + 1;

	result = malloc(sizeof(char) * size);

	if (result == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < s1_lenght; i++)
	{
	result[i] = s1[i];
	}

	if (n >= s2_lenght)
	{
	for (i = 0; i < s2_lenght; i++)
	{
	result[s1_lenght + i] = s2[i];
	}
	}

	for (i = 0; i < n; i++)
	{
	result[s1_lenght + i] = s2[i];
	}

	result[s1_lenght + i] = '\0';

	return (result);
}
