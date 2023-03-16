#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * malloc_checked - a function that allocates memory using malloc
  * @b: number of bytes to be allocated
  * Return: a pointer to the allocated memory
  */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);

	if (memory == NULL)
	{
		exit(98);
	}
	return (memory);
}
