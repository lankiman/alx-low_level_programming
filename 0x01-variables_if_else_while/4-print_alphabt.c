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

	for (i = 97 ; i <= 122 ; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}

	putchar('\n');

	return (0);
}
