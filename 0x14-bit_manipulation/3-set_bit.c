#include "main.h"
/**
  *set_bit - Set the value of a specific bit to 1
  *@n: Pointer to the number whose bit toe set
  *@index: Index of the bit to be  set
  *Return: 1 if successful
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	bit = sizeof(*n) * 8;

	if (index >= bit)
	{
		return (-1);
	}

	*n |= (1UL << index);

	return (1);

}
