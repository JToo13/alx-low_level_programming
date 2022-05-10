#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(size * nmemb);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size * nmemb); i++)
	{
		s[i] = 0;
	}
	return (s);
}
