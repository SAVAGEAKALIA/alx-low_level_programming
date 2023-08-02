#include "main.h"
#include <stdio.h>
/**
*swap_int - swap two numbers
*@a: data type
*@b: data type
*
*/


void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a  = *b;
	*b = temp;
}
