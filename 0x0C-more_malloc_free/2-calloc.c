#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _calloc - a function that allocates memory for an array, using malloc
  * @nmemb: number of elements
  * @size: size of each array element in bytes
  * Return: NULL if nmemb or size is 0 or the function fails, otherwise
  * a pointer to the allocated memory.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *fill;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	fill = memory;

	for (i = 0; i < (size * nmemb); i++)
		fill[i] = '\0';

	return (memory);
}

