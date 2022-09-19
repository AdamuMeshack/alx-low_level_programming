#include "main.h"

/**
 * _strlen - Return the length of string
 *
 * @s : the character containing the character
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
