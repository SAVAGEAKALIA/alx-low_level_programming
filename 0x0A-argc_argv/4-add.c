#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - main function
*@argv: data type
*@argc: data type
*
*Return: 0
*/

int main(int argc, char *argv[])
{
	int x, result = 0;

	for (x = 1; x < argc; x++)
{
	if (argc < 2)
{
	printf("%d\n", 0);
}

	else if (!isdigit(*argv[x]))
{
	printf("Error\n");
	return (1);
}

	else
{
	result += atoi(argv[x]);
}
}
	printf("%d\n", result);
	return (0);
}
