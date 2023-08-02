#include "main.h"
#include <ctype.h>
/**
* _isupper - Return value
*@c: data type
* Return: on success 1
*/

int _isupper(int c)
{
	if (isupper(c))
	{	return (1);
	}
	else
		return (0);
}
