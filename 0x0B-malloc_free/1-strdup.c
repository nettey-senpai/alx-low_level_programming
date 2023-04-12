#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *arr;
	int j, a = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	arr = malloc(sizeof(char) * (j + 1));

	if (arr == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		arr[a] = str[a];

	return (arr);
}
