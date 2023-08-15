#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
  *free_dog - free the allocated memory of function
  *@d: pointer to Structure
  *
  */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);

	free(d);
}
