#include "main.h"
/**
 * main - check the code
 *
 * Description: A function that prints the alphabet, in lowercase,and new line
 *
 * Return: Always 0.
*/

void print_alphabet(void)
{
	char c;
for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}
