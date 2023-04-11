#include "main.h"
#include <stdlib.h>

/**
 * create_array- creates an array of size and assign char c
 * @size: size of the array
 * @c: char to assign
 * Description: create an array of soze and assign char c
 * Return: pointer to the array, return NULL on fail
*/
char *create_array(unsigned int size, char c)

{

	char *str;

	unsigned int i;



	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)

		return (NULL);



	for (i = 0; i < size; i++)

		str[i] = c;

	return (str);

}
