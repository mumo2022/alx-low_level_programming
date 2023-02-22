#include <stdio.h>

/**
  * main - Entry point
  * Return: Always 0 (success)
  */

int main(void)
{
	unsigned long n1 = 0;
	unsigned long n2 = 1;
	unsigned long sum;
	float totalSum;

	while (1)
	{
		sum = n1 + n2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			totalSum = totalSum + sum;

		n1 = n2;
		n2 = sum;
	}
	printf("%.0f\n", totalSum);

return (0);
}

