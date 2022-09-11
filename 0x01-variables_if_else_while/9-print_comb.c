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
for (c = 48; c <= 57; c++)
{
		putchar(c);
		if (c != 57)
	{
			putchar(',');
			putcher(' ');
			}
	}
	putchar('\n');
	return (0);
}
