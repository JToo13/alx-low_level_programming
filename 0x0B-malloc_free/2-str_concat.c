#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new space in memory or null
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	s = malloc(sizeof(*s) * (i + j + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	k = l = 0;

	while (s1[k] != '\0')
	{
		s[k] = s1[k];
		k++;
	}
	while (s2[l] != '\0')
	{
		s[k] = s2[l];
		k++, l++;
	}
	s[k] = '\0';
	return (s);
}
