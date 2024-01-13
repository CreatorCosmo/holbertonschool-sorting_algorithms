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
 * bubble_sort - Sorts an array of integers in ascending order
 *               using the Bubble sort algorithm
 *
 * @array: Array of integers
 * @size: Size of the array
 */

void bubble_sort(int *array, size_t size) {
    if (array == NULL || size < 2)
        return;

    int swapped;
    for (size_t i = 0; i < size - 1; i++) {
        swapped = 0;
        for (size_t j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1;
                print_array(array, size); // Print the array after each swap
            }
        }
        if (swapped == 0) { // If no two elements were swapped by inner loop, then break
            break;
        }
    }
}
