#include <stdio.h>

int main()
{
	char c;
	int i;
	long int ld;
	long long int lu;
	float f;

	printf ("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf ("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf ("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(ld));
	printf ("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lu));
	printf ("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}

