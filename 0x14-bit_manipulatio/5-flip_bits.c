#include "main.h"
/**
  *flip_bits - Count the number of bits to flip and convert to another
  *@n: first number
  *@m: second number
  *Return: number of bits that need to be flipped
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int i = 0;

	while (result > 0)
	{
		i = i + (result & 1);
		result = result >> 1;
	}
	return (i);
}
