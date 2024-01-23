#include "sort.h"

/**
 * two_int_swap - A function that swaps two integers in an array
 * @j: Input int swap 1
 * @k: Input int swap 2
 */

void two_int_swap(int *j, int *k)
{
	int tmp;

	tmp = *j;
	*j = *k;
	*k = tmp;
}

/**
 * bubble_sort - A function that sorts an array of integers in ascending order
 * @array: Input
 * @size: Input
 * Description: functions that print the array after each swap
 */

void bubble_sort(int *array, size_t size)
{
	size_t sl, len = size;
	bool bsl = false;


	if (array == NULL || size < 2)

	while (bsl == false)
	{
		bsl = true;
		for (sl = 0; sl < len - 1; sl++)
		{
			if (array[sl] > array[sl + 1])
			{
				two_int_swap(array + sl, array + sl + 1);
				print_array(array, size);
				bsl = false;
			}
		}
		len--;
	}
}
