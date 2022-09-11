#include<stdio.h>
/*
 * main - Entry point
 *
 * Description: using the main function to print three digit combination
 *
 * Return: 0 always(success)
 */

int main(void)
{
	int c = 0;
	int d;
	int e;
	int f;

	while (c <= 999)
	{
		d = (c / 100 + '0');
		e = (c / 10 % 10 + '0');
		f = (c % 10 + '0');
		if ((b < d) && (d < f))
		{
			putchar(d);
			putchar(e);
			putchar(f);

			if (c != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
	putchar('\n);
	return (0);
}
