#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes it with a char
 * @size: size of the array
 * @c: char to be initialized with
 * Return: pointer to array or null
 **/
char *create_array(unsigned int size, char c)
{
	char *z;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	z = malloc(sizeof(*z) * size);
	if (z == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		z[i] = c;
		i++;
	}
	return (z);
}
