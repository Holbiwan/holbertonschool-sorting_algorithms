#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * @array: The array of integers to be sorted
 * @size: The number of elements in the array
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j, aux;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
