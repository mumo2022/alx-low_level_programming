#include "main.h"

/**
  * _isalpha - a function that checks for alphabetic character
  * @c: is the single letter input
  * Return: 1 if c is a lowercase or uppercase letter, else, return 0
  */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
