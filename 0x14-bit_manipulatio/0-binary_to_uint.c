#include "main.h"
/**
  *binary_to_uint - convert binary to decimal
  *@b: pointer to char
  *Return: result on success
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n, result = 0;

	if (b == NULL)
		return (0);

	for (n = 0; b[n] != '\0'; n++)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);

		result = (result << 1) | (b[n] - '0');

	}
	return (result);
}
