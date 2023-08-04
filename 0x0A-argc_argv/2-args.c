#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*main - main function
*@argc: data type
*@argv: data type
*
*Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
{
	for (i = 1; i < argc; i++)
	printf("%s\n", argv[i]);
}
	return (0);
}
