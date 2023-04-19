#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name argument using pointer to function
 * @name: string to print
 * @f: pointer to function that prints string
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
