#include "main.h"
/**
  *get_endianness - check for endian
  *Return: 1 if small endian else 0 if big
  */

int get_endianness(void)
{
	unsigned int n = 1;
	unsigned char *byte_ptr = (unsigned char *)&n;

	return (*byte_ptr == 1);
}
