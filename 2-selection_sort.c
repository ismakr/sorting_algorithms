#include "sort.h"
/**
 * selection_sort -  sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: unsorted array
 * @size: size of array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int swp;

	i = 0;
	j = 0;
	while (i < size)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (array[min] > array[j])
				min = j;
			j++;
		}
		if (min != i)
		{
			swp = array[i];
			array[i] = array[min];
			array[min] = swp;
			print_array(array, size);
		}
		i++;
	}
}
