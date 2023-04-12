#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - the nested loop to make grid
 * @width: the width input
 * @height: the height input
 * Return: the pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **ab;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	ab = malloc(sizeof(int *) * height);

	if (ab == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		mee[a] = malloc(sizeof(int) * width);

		if (mee[a] == NULL)
		{
			for (; a >= 0; a--)
				free(ab[a]);

			free(ab);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			ab[a][b] = 0;
	}

	return (ab);
}

