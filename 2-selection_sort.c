#include "sort.h"

/**
 * selection_sort - sorts array of ints
 * @array: array to sort
 * @size: size of array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i; /*iterator*/
	size_t current; /*current position*/
	size_t min; /*smallest*/
	int tmp; /*tmp holder*/

	for (current = 0; current < size - 1; current++) /*loop through except last one*/
	{
		min = current; /*min is current*/
		for (i = current + 1; i < size; i++) /*find smallest*/
		{
			if (array[i] < array[min]) /*update with smaller value*/
			min = i;
		}

		if (min != current) /*swap with smallest*/
		{
			tmp = array[current];
			array[current] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
