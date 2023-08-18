#include "calc.h"
#include <stdlib.h>
/**
  *
  *
  *
  *
  *
  */


int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	if (*s == NULL)
		return (NULL);

	while (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] ==
			%)
		i++;


