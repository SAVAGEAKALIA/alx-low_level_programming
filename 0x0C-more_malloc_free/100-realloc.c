#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory
 * @ptr: pointer to the memory previsouly allocated
 * @old_size: size for ptr
 * @new_size: new size memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptri;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptri = malloc(new_size);
	if (!ptri)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptri[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptri[i] = old_ptr[i];
	}

	free(ptr);
	return (ptri);
}
