#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
  *print_dog - structure function
  *@d: pointer to structire
  *
  */

void print_dog(struct dog *d)
{

	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)");
	else
	{
		printf("Name: %s\n", d->name);
	}

		printf("Age: %1.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);
}
