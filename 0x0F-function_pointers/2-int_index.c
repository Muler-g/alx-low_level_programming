#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: int pointer
 * @size: number of elements in the array
 * @cmp: pointer to the function
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && size && cmp)
	{

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
