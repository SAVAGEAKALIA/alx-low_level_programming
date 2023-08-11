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

	if (s1 == 0)
	return ("");

	if (s2 == 0)
	return ("");

	s1_lenght = strlen(s1);
	s2_lenght = strlen(s2);
	size = s1_lenght + ((n < s2_lenght) ? n : s2_lenght) + 1;
	result = malloc(sizeof(char) * size);

	if (result == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < s1_lenght; i++)
	{
	result[i] = s1[i];
	}

	if (n < s2_lenght)
	{
	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
	result[s1_lenght + i] = s2[i];
	}
	}

	else
	{
	for (i = 0; i < s2_lenght; i++)
	{
	result[s1_lenght + i] = s2[i];
	}
	}
	result[s1_lenght + i] = '\0';
	return (result); }
