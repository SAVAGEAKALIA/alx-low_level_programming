#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - man function
*@argc: data type
*@argv: data type
*
*Return: 0
*/
int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int min_coins = 0;
	int i;

	if (argc != 2)
{
	printf("Error\n");
	return (1);
}

	if (cents < 0)
{
	printf("0\n");
	return (0);
}

	for (i = 0; i < num_coins; i++)
{
	min_coins += cents / coins[i];
	cents %= coins[i];
}

	printf("%d\n", min_coins);

	return (0);
}
