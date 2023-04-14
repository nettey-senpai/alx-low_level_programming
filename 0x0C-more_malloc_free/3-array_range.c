#include <stdlib.h>
#include "main.h"

/**
 * *array_range - this creates an array of integers
 * @min: the minimum range of values stored
 * @max: the maximum range of values stored and number of elements
 *
 * Return: a pointer to the new array
 */
int *array_range(int min, int max)
{
	int *p;
	int j, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (j = 0; min <= max; j++)
		p[j] = min++;

	return (p);
}
