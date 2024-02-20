#include "sort.h"
/**
 * lomutoPartition - Lomuto partition(last ele)
 * @array: uns array
 * @size: size of array
 * @low: start of array 0
 * @high: end of array size - 1
 * Return: pivot index
 */
int lomutoPartition(int *array, size_t size, int low, int high)
{
	int i, j, pivot, swp;

	pivot = array[high];
	i = low;
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			swp = array[i];
			array[i] = array[j];
			array[j] = swp;
			if (array[i] != array[j])
				print_array(array, size);
			i++;
		}
	}
	swp = array[i];
	array[i] = array[high];
	array[high] = swp;
	if (array[i] != array[high])
		print_array(array, size);
	return (i);
}
/**
 * quick_sort_2 - sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: uns array
 * @size: size of array
 * @low: start of array 0
 * @high: end of array size - 1
 * Return: void
 */
void quick_sort_2(int *array, size_t size, int low, int high)
{
	int p;

	if (low < high)
	{
		p = lomutoPartition(array, size, low, high);
		quick_sort_2(array, size, low, p - 1);
		quick_sort_2(array, size, p + 1, high);
	}
}
/**
 * quick_sort - sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: uns array
 * @size: size of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;

	quick_sort_2(array, size, 0, (int)size - 1);
}
