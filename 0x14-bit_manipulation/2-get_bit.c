#include "main.h"
/**
  *get_bit - print bit at given index
  *@n: value of bit
  *@index: index of given bit
  *Return: bit on success
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit = sizeof(n) * 8;

	if (index >= bit)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
