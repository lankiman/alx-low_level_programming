#include <stdio.h>
#include <stdlib.h>
/**
 * main-Printing simple digits of base 16 numbers
 *
 * Return: 0 on sucess
 */
int main(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
	}

	for (i = 97 ; i <= 102 ; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
