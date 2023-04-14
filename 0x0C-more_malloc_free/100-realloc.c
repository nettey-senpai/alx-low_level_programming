#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - this reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory that was previsouly allocated by malloc
 * @old_size: a size of the allocated memory for ptr
 * @new_size: a new size of the new memory block
 *
 * Return: a pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *old_p;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p1 = malloc(new_size);
	if (!p1)
		return (NULL);

	old_p = ptr;

	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
			p1[j] = old_p[j];
	}

	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
			p1[j] = old_p[j];
	}

	free(ptr);
	return (p1);
}
