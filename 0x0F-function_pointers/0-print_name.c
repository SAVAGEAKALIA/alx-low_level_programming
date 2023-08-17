#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *print_name - print name in a pointer to a function
  *@f: pointer to function
  *@name: pointer to char
  */

void print_name(char *name, void (*f)(char *))
{
			f(name);
}