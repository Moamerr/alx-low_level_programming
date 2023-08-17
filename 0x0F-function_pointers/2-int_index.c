#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer and returns index place
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to function to be used to compare values
 * Return: -1 in case of failure or index place otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
