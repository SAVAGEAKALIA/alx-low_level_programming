#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *main - main fuction for this code
  *@argc: argument count
  *@argv: arguments
  *Return: 0 on sucess
  */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2, calc = 0;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' && num2 == 0) ||
	    (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(operator)(num1, num2);

	printf("%d\n", calc);

	return (0);
}
