#include <stdio.h>

/**
  * main - Entry point
  * Return: Always 0 (success)
  */

int main(void)
{
	int m;
	unsigned long n1 = 0;
	unsigned long n2 = 1;
	unsigned long sum;

	for (m = 0; m < 50; m++)
	{
		sum = n1 + n2;
		printf("%lu", sum);

		n1 = n2;
		n2 = sum;

		if (m == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
