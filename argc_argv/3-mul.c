#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: argc
 * @argv: argv
 *
 * Return: 0 success, 1
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
