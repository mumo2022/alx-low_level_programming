#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * array_range - a function that creates an array of integers
  * @min: first array value
  * @max: second array value
  * Return: pointer to the newly created array, otherwise
  * NULL if min > max or function fails
  */

int *array_range(int min, int max)
{
	int *array, len, i;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;

	array = malloc(sizeof(int) * len);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		array[i] = min++;

	return (array);

}
