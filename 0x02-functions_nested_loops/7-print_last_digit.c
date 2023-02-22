#include "main.h"

/**
  * print_last_digit - a function that prints the last digit of a number
  * @nld: number's last digit result
  * Return: the value of the last digit
  */

int print_last_digit(int nld)
{
	int mld;

	mld = (nld % 10);

	if (mld < 0)
	{
		mld = (-1 * mld);
	}

	_putchar(mld + '0');
	return (mld);
}
