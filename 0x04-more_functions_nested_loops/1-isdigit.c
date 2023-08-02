#include "main.h"
#include <ctype.h>

/**
* _isdigit - Return value
* @c: data type
*
* Return: return 1 on success
*/

int _isdigit(int c)
{
		if (isdigit(c) && c < 10)
		{
			return (1);
		}
		else
			return (0);
}
