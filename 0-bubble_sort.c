#include "sort.h"

/**
 * swap - function to swap two numbers
 * @n1: num 1
 * @n2: num 2
 */
void swap(int *n1, int *n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

/**
 * bubble_sort - algorithm to sort data
 * @array: array to be sorted
 * @size: length of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool swaped;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size; i++)
	{
		swaped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swaped = true;
			}
		}
		if (swaped == false)
			break;
	}
}
