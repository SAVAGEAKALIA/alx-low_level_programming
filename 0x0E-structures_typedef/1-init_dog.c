#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  *init_dog - function for structures
  *@d: pointer of variables to structure
  *@name: pointer to char
  *@age: pointer to a float number
  *@owner: pointer to char
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
			if (d == NULL)

			d = malloc(sizeof(struct dog));

			d->name = name;
			d->age = age;
			d->owner = owner;
}
