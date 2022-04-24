#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int i = 0, j;

	char spec[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
	}
	i++;

	while (s[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if ((s[i] >= 'a' && s[i] <= 'z') && (s[i - 1] == spec[j]))
			{
				s[i] = s[i] - 32;
			}
		}
		i++;
	}
	return (s);
}

