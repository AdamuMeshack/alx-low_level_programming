#include "main.h"
/**
 * main - prints the alphabet, in lowercase
 *
 * Description: prints 10 times the alphabet, in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void);
{
	char c, f;
	for (c = 0; c <= 9; c++)
	{
		for (f = 'a'; f <= 'z'; f++)
		{
			_putchar(f);
		}
		_putchar('\n');
	}
}
