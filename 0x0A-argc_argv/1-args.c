#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*main - main code
*@argc: data type
*@argv: data type
*
*Return: 0
*/


int main(int argc, char *argv[])
{	int result = 0;


	if (argc == 1 || argv == 0)
{	printf("0\n");
}
	else
{
	result = argc - 1;
	printf("%d\n", result);
}
	return (0);
}
