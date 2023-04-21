#include "function_pointers.h"
/**
 * int_index - this returns index place if comparison = true, else -1
 * @array: an array
 * @size: the number of elements in array
 * @cmp: the pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
