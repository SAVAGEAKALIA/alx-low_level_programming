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
	int num1 = atoi(argv[1]);
	char *operator = argv[2];
	int num2 = atoi(argv[3]);
	int calc = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

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
