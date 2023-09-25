#include "sort.h"
 /**
  * selection_sort - sort an array of integers in ascending order
  * @array : Integer of the array
  * @size : size of the array
  *
  **/

void selection_sort(int *array, size_t size)
{
	size_t x, a, y;
	int tmp;

	for (a = 0; a < size; a++)
	{
		y = a;
		for (x = a + 1; x < size; x++)
		{
			if (array[y] > array[x])
				y = x;
		}

		if (a != y)
		{
			tmp = array[a];
			array[a] = array[y];
			array[y] = tmp;
			print_array(array, size);
		}
	}

}
