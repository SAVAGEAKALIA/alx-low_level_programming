#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*main - main
*@argc: data type
*@argv: data type
*Return: 0
*/


int main(int argc, char *argv[])
{
	int x, y, result = 1;

	x = 1;
	y = 2;

	if (argc < 3)
{
	printf("Error\n");
	return (1);
}

	else
{	result = atoi(argv[x]) * atoi(argv[y]);
	printf("%d\n", result);
}
	return (0);
}
