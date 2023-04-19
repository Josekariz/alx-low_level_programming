#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - applies a given function to each element of an array
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function to apply
 *
 * returns without doing anything.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
