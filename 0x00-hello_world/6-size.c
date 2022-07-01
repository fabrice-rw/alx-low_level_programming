#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	double doubleType;
	float floatType;

	printf("Size of char: %d", sizeof(char));
	printf("Size of int: %d", sizeof(int));
	printf("Size of long int: %d", sizeof(int));
	printf("Size of long long int: %d", sizeof(double));
	printf("Size of float: %d", sizeof(float));
	return (0);
}
