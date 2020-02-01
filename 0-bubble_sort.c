#include "sort.h"
/**
 * bubble_sort - Entry point
 *
 * @array: test
 * @size: test
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{
	int end = size;
	int i = 0;
	int temp;

	while (end - 1 > 0)
	{
		while (i < end - 1)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
			i++;
		}
		end--;
		i = 0;
	}
}
