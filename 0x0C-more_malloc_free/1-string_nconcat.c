#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k, l;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	p = malloc(sizeof(*p) * (i + n + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	k = l = 0;
	while (s1[k] != '\0')
	{
		p[k] = s1[k];
		k++;
	}
	while (s2[l] != s2[n])
	{
		p[k] = s2[l];
		k++, l++;
	}
	p[k] = '\0';
	return (p);
}
