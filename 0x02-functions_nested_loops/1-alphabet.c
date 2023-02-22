#include "main.h"

/**
  * print_alphabet - Entry point
  *
  * Return: void
  */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
_putchar('\n');
}
