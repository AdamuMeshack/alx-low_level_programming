#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	long int f1 = 1, f2 = 2, sum = f2, tmp;

	while (f2 < 98)
	{
		tmp = f1 + f2;
		f1 = f2;
		f2 = tmp;
		sum += (f2 % 2 == 0) ? f2 : 0;
	}
	printf("%li\n", sum);
	return (0);
}
