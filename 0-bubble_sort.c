#include "sort.h"
#include <stdbool.h>
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
	bool noswp;

	i = size;
	if (!array || !size)
		return;
	while (i > 0)
	{
		noswp = true;
		j = 0;
		while (j < i - 1)
		{
			if (array[j] > array[j + 1])
			{
				swp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = swp;
				print_array(array, size);
				noswp = false;
			}
			j++;
		}
		if (noswp)
			break;
		i--;
	}
}
