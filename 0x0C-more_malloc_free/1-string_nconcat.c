#include "main.h"
#include <stdlib.h>
/**
*string_nconcat - function to concatenate strings
*@s1: Data type
*@s2: Data type
*@n: unsigned integer value
*Return: pointer that terminates at Null
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, s1_lenght = 0, s2_lenght = 0, j = 0;
	char *result;

	while (s1 && s1[s1_lenght])
	s1_lenght++;
	while (s2 && s2[s2_lenght])
	s2_lenght++;

	result = malloc(sizeof(char) * (s1_lenght + ((n >= s2_lenght) ? s2_lenght :
					n) + 1));

	if (!result)
	{
	return (NULL);
	}

	for (i = 0; i < s1_lenght; i++)
	{
	result[i] = s1[i];
	}

	for (i = s1_lenght; (n < s2_lenght || n >= s2_lenght) && i < ((n >=
					s2_lenght) ? s2_lenght : n) + s1_lenght; i++)
	{
		result[i] = s2[j++];
	}

	result[i] = '\0';

	return (result);
}
