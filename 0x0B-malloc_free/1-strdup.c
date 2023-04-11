#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - copies to new memory space location
 * @str: char
 * Return: 0 if str is null
*/
char *_strdup(char *str)
{

	char *newstr;

	int i, r = 0;


	if (str == NULL)

		return (NULL);

	i = 0;

	while (str[i] != '\0')

		i++;



	newstr = malloc(sizeof(char) * (i + 1));



	if (newstr == NULL)

		return (NULL);



	for (r = 0; str[r]; r++)

		newstr[r] = str[r];



	return (newstr);

}
