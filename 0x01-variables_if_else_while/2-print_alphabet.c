#include<stdio.h>

/**
 * main - prints the letter of the alphabet
 *
 * Description: prints the letters of the alphabet
 *
 * Return: 0
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
	putchar(i);
	i++;
	}
	putchar(10);
	return (0);
}
