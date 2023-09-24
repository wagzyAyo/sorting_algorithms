#include "sort.h"

/**
 * bubble_sort -  sorts an array of int in ascending order
 * @array : array to be sorted
 * @size : array size
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, a;
	int tmp;
	int swap;

	for (x = 0; x < size - 1; x++)
	{
		swap = 0;
		for (a = 0; a < size - x - 1; a++)
		{
			if array[j] > array[j + 1]
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swap = 1;
				print_array(array, size);
			}
		}

		if (swap == 0)
			break;
	}
}
