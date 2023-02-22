#include <stdio.h>

/**
  * _abs - a function that computes the absolute value of an integer.
  * @ab: single number input.
  * Return: absolute value of ab
  */

int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
