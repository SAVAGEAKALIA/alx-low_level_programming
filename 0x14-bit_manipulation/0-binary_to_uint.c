#include "main.h"
/**
  *binary_to_uint - to convert binary to decimal
  *@b: pointer to character
  *Return: Result on success
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, result = 0;


	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);

		result = (result << 1) | (b[i] - '0');

	}

	return (result);
}
