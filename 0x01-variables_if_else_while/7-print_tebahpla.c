#include <stdio.h>
#include <stdlib.h>
/**
 * main-Printing alphabets a-z in lower case
 *
 * Return: 0 on sucess
 */
int main(void)
{
	int i;

	for (i = 122 ; i >= 97 ; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
