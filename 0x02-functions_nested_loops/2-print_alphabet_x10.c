#include "main.h"

/**
  * print_alphabet_x10 - Make alphabet 10 times while in lowercase
  *
  * Return: void
  */

void print_alphabet_x10(void)
{
	char m;
	int a = 0;

	while (a <= 9)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
		a++;
	}
}
