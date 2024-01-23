#include "sort.h"

/**
 * two_int_swap - A function that swaps two integers in an array
 * @j: input swap 1
 * @k: Input swap 2
 */

void two_int_swap(int *j, int *k)
{
	int tmp = *j;
	*j = *k;
	*k = tmp;
}

/**
 * selection_sort - A function that sorts an arra
 * of integers in ascending order
 * using the selection sort algorithm
 * @array: Input
 * @size: Input
 * Description: Prints the array after each swap.
 */

void selection_sort(int *array, size_t size)
{
	int *kay;
	size_t sl, bsl;

	if (array == NULL || size < 2)
		return;

	for (sl = 0; sl < size - 1; sl++)
	{
		kay = array + sl;
		for (bsl = sl + 1; bsl < size; bsl++)
			kay = (array[bsl] < *kay) ? (array + bsl) : kay;

		if ((array + sl) != kay)
		{
			two_int_swap(array + sl, kay);
			print_array(array, size);
		}
	}
}
