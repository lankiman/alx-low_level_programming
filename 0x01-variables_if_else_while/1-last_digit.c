#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-Determine if a random number is positive, negative or zero.
 *
 * Return: 0 on sucess
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int n_last;

	n_last = n % 10;

	if (n_last > 5)
	{
		printf("Last digit of %d is 5\n", n);
	}
	else if (n_last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n_last);
	}
	else if (n_last < 6 && n_last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, n_last);
	}

	return (0);
}
