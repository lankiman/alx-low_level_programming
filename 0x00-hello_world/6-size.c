#include<stdio.h>

/**
* main - Entry Level
*
* Description: prints the size of various type data types
*
* Return: Allways 0 (Success)
*
*/

int main(void)

{

	printf("Size of a char: %d byte(s)\n", (int) sizeof(char));

	printf("Size of an int: %d byte(s)\n", (int) sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (int) sizeof(long int));

	printf("Size of long long int: %d byte(s)\n", (int) sizeof(long long int));

	printf("Size of a float: %d byte(s)\n", (int) sizeof(float));

	return (0);
}
