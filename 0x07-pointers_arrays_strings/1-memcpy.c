#include "main.h"
/**
 *_memcpy - function that copies memory area
 *@dest: memory where its stored
 *@src: memory where its copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int j = 0;
int i = n;
while (j < i)
{
dest[j] = src[j];
n--;
j++;
}
}
