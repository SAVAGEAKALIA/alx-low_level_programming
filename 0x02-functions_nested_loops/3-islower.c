#include "main.h"

/**
* _islower - check the code for lower char set
* @c: Code parameter
* Return: 1 or 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
