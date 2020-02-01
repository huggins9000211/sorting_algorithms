#include "sort.h"
/**
 * selection_sort - Entry point
 *
 * @array: test
 * @size: test
 * Return: Always 0
 */
void selection_sort(int *array, size_t size)
{
	int i, j;
	int aLength = size;

	for (i = 0; i < aLength - 1; i++)
	{
		int jMin = i;

		for (j = i + 1; j < aLength; j++)
		{
			if (array[j] < array[jMin])
			{
				jMin = j;
			}
		}

		if (jMin != i)
		{
			int temp = array[i];

			array[i] = array[jMin];
			array[jMin] = temp;
			print_array(array, size);
		}
	}
}
