#include "main.h"
#include <string.h>
/**
*rev_string - swap and print in reverse
*@s: data type
*
*
*/

void rev_string(char *s)
{
	int begin, end;
	char temp;

	end = strlen(s);

	for (begin = 0; begin < end / 2; begin++)
{
	temp = s[begin];
	s[begin] = s[end - 1 - begin];
	s[end - 1 - begin] = temp;
}
}
