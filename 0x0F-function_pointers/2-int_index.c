#include "function_pointers.h"

/**
 * int_index - searches an integer
 * @array: name of array
 * @size: number of element in an array
 * @cmp: ponter to the function
 * Return: index of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
