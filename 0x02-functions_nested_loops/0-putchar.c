#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Returns 0 (success)
  */

int main(void)
{
	char *ch = "_putchar";

	while (*ch)
	{
		putchar(*ch);
		ch++;
	}

	putchar('\n');

return (0);
}
