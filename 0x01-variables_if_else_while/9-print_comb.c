#include <stdio.h>
#include <stdlib.h>
/**
 * main-Printing simple digits of base 10 numbers
 *
 * Return: 0 on sucess
 */
int main(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);

		putchar(44);

		putchar(32);
	}
	putchar('\n');

	return (0);
}
