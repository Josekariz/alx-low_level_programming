#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)

{
	int **dimen;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	dimen = malloc(sizeof(int *) * height);
	if (dimen == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		dimen[x] = malloc(sizeof(int) * width);
		if (dimen[x] == NULL)
		{
			for (; x >= 0; x--)
				free(dimen[x]);
			free(dimen);
			return (NULL);
		}

	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			dimen[x][y] = 0;

	}
	return (dimen);
}
