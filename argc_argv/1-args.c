#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count = argc - 1;

	(void)argv;
	printf("%d\n", count);
	return (0);
}
