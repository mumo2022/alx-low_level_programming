#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
  * main - entry point
  * @argv: commandline args value
  * @argc: commandline args count
  * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	int m;
	int n;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	m = atoi(argv[1]);
	n = atoi(argv[3]);

	printf("%d\n", ptr(m, n));

	return (0);
}
