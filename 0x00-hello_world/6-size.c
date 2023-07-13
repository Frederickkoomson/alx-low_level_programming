#include<stdio.h>
/**
 * main -  This is where our code will be done
 *
 * Return: this is where our return will be 0
 */
int main(void)
{
	/* This is to print the various type and size of the computerit is run on*/
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
