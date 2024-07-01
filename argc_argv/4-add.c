#include <stdio.h>
/**
 * main - adds positive numbers
 * @argc: argc
 * @argv: argv
 *
 * Return: 0 no errors, or 1
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	int num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		}
		num = 0;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			num = num * 10 + (argv[i][j] - '0');
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
