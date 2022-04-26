#include "main.h"
#define NULL 0

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	while (s[j] != '\0' && s[j] != c)
	{
		j++;
	}
	if (s[j] == c)
	{
		return (&s[j]);
	}
	else
	{
		return (NULL);
	}
}
