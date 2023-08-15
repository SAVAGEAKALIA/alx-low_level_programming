#ifndef DOG_H
#define DOG_H
/**
  *struct dog - structure dog task
  *@name: first member
  *@age: second member
  *@owner: third member
  *Description: Structure function with three arguments
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
