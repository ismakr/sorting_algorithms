#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: unsorted array
 * @size: size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swp;

	swp = 0;
	i = 0;
	while (i < size)
	{
		print_array(array, size);
		j = 0;
		while (j < size - 1)
		{
			if (array[j] > array[j + 1])
			{
				swp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = swp;
			}
			j++;
		}
		i++;
	}
}
