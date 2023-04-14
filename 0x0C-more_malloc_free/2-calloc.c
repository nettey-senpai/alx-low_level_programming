#include <stdlib.h>
#include "main.h"

/**
 * *_memset - this fills memory with a constant byte
 * @s: the memory area to be filled
 * @b: the char to copy
 * @n: the number of times to copy b
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}

/**
 * *_calloc - this allocates memory for an array
 * @nmemb: the number of elements in the array
 * @size: the size of each element
 *
 * Return: a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
