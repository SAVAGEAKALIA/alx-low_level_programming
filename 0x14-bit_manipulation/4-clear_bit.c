#include "main.h"
/**
  *clear_bit - Clear a specific bit
  *@n: Pointer to the number of bit to be cleared
  *@index: Index of the bit to be cleared
  *Return: 1 if successful, or -1 if fail
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	bit = sizeof(*n) * 8;

	if (index >= bit)
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);
}
