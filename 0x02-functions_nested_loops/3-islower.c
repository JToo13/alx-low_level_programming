#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c : the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	int lower;

	if (c >= 'a' && c <= 'z')
	{
		lower = 1;
	}
	else
	{
		lower = 0;
	}
	return (lower);
}
