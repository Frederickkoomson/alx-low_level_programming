#include<unistd.h>
/**
 * main - that prints exactly and that piece of art is useful
 * Return: Your program should return 1 if it run successful
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(3, str1, 60);
	return (1);
}
