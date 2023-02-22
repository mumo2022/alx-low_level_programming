#include "main.h"

/**
  * _islower - Entry point
  * @c: - character to be checked
  * Return: 1 for lowercase character, otherwise 0
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);

	}
}

