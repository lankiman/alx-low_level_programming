#include <stdio.h>
#include <stdlib.h>
/**
 * main-Printing alphabets in both lowercase and uppercase
 *
 * Return: 0 on sucess
 */
int main(void)
{
	int i;

	for (i = 97 ; i <= 122 ; i++)
	{
		putchar(i);
	}

	for (i = 65 ; i <= 90 ; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
