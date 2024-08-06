#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: the array
 * @size: size of array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j; /*iterators*/
	int n; /*for swapping*/

	if (size < 2) /*if less than 2 args*/
		return;
	for (i = 0; i < size - 1; i++) /*iterate through*/
	{
		for (j = 0; j < size - i - 1; j++) /*compare*/
		{
			if (array[j] > array[j + 1]) /*if greater than last*/
			{
				n = array[j]; /*then swap*/
				array[j] = array[j + 1];
				array[j + 1] = n;
				print_array(array, size); /*print array*/
			}
		}
	}
}
