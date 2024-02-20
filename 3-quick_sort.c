#include "sort.h"
/**
 * lomutoPartition - Lomuto partition(last ele)
 * @array: uns array
 * @size: size of array
 * @start: start of array 0
 * @end: end of array size - 1
 * Return: pivot index
 */
size_t lomutoPartition(int *array, size_t size, size_t start, size_t end)
{
	size_t i, j;
	int swp, pivot;

	pivot = array[end];
	i = start;
	j = start;
	while (i < end)
	{
		if (pivot >= array[i])
		{
			swp = array[i];
			array[i] = array[j];
			array[j] = swp;
			print_array(array, size);
			j++;
		}
		i++;
	}
	swp = array[end];
	array[end] = array[j];
	array[j] = swp;
	print_array(array, size);
	if (j == 0)
		j = end + 1;
	return (j);
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
void quick_sort_2(int *array, size_t size, size_t low, size_t high)
{
	if (high > low)
	{
		size_t pivot;

		pivot = lomutoPartition(array, size, low, high);
		quick_sort_2(array, size, low, pivot - 1);
		quick_sort_2(array, size, pivot + 1, high);
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
	quick_sort_2(array, size, 0, size - 1);
}
