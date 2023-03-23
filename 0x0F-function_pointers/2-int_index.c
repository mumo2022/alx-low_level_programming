#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: arrays of elements
 * @size: the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 * Return: Always 0 (success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
	}
	return (-1);
}
