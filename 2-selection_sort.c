#include "sort.h"

/**
 * selection_sort - selection sort algorithm
 * @array: to be sorted
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int temp = 0;
	size_t i, j, pos;
	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		pos = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[pos])
				pos = j;
		}
		if (pos != i)
		{
			temp = array[i];
			array[i] = array[pos];
			array[pos] = temp;
			print_array(array, size);
		}
	}
}
