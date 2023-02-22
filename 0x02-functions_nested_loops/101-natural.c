#include <stdio.h>

/**
  * main - entry point
  * Return: Always 0 (success)
  */

int main(void)
{
	int m = 0;
	int sum = 0;

	while (m < 1024)
	{
		if ((m % 3) == 0 || (m % 5) == 0)
		{
			sum = sum + m;
		}
		m++;
	}
	printf("%d\n", sum);
	return (0);
}

