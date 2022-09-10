#include <stdio.h>

/**
 * main - Prints a series of numbers with commas
 *
 * Discription: a program that prints all possible combinations
 *
 *  Return: 0 Always (Success);
 */
int main(void)
{
	int c;
for (c = '0'; c <= '9'; c++)
	{
	putchar(c);
	if (c != '9')
	{
	putchar(',');
	}
	}
	return (0);
}
