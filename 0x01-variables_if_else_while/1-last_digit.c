#include <stdlib.h>
#include <time.h>

/**
 * main - The last digit 
 *
 * Description: This program will assign a random number to the variable n each time is executed
 *
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (n == 0)
	printf("Last digit of %d is %d and is 0\n", n is last);
	else if (last < 6 && last ! == 0)
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
