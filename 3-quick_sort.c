#include "sort.h"

/**
 * quickSort - squick sort function
 * @array : array to sort
 * @low : first element index
 * @high ; last element index
 * @size : Size of array
 **/
void quickSort(int *array, int low, int high, int size)
{
	int x, a, y;
	int tmp;

	if (low < high)
	{
		x = low;
		y = high;
		for (a = low; a < high; a++)
		{
			if (array[a] < array[x])
			{
				if (a != y)
				{
					tmp = array[a];
					array[a] = array[x];
					array[x] = tmp;
					print_array(array, size);
				}
				x++;
		}
	}
	if (x != y && array[x] != array[y])
	{
		tmp = array[x];
		array[x] = array[y];
		array[y] = tmp;
		print_array(array, size);
	}
	quickSort(array, low, x - 1, size);
	quickSort(array, x + 1, high, size);

	}
}

/**
 * quick_sort - sort an array of integers in acsending order
 * @array: array to be sorted
 * @size: size of the array
 *
 **/

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;


	quickSort(array, 0, size -1, size)
}
