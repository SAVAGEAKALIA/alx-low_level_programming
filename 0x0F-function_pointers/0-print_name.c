#include "function_pointers.h"
/**
  *print_name - print name in a pointer to a function
  *@f: pointer to function
  *@name: pointer to char
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
