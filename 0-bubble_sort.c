#include "sort.h"
/**
 * swap_ints - Swaps two integers in an array
 *
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void swap_ints(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
	* bubble_sort - Sorts an array of int in ascending order
	* Description: This function implements the
		* Bubble Sort algorithm to sort an array of integers
		* in ascending order
	* @array: Pointer to the first element of the array to be sorted.
	* @size: Number of elements in the array.
	* Return: Sorts the array in place
*/

void bubble_sort(int *array, size_t size)
	{
	size_t i, j;
	int swapped, temp;

	if (array == NULL || size < 2)
	return;

	for (i = 0; i < size - 1; i++)
	{
	swapped = 0;
	for (j = 0; j < size - i - 1; j++)
	{

	if (array[j] > array[j + 1])
	{
		temp = array[j];
		array[j] = array[j + 1];
		array[j + 1] = temp;
		swapped = 1;
		print_array(array, size);
		}
	}
	if (!swapped)
	break;
	}
}
