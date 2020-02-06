#include "sort.h"
/**
 * selection_sort - Entry point
 *
 * @array: test
 * @size: test
 * Return: Always 0
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_helper(array, 0, size - 1, size);
}

void quick_sort_helper(int *array, int lo, int hi, size_t size)
{
	
	if (lo < hi)
	{
		
		int p = partition(array, lo, hi, size);
		quick_sort_helper(array, lo, p - 1, size);
		quick_sort_helper(array, p + 1, hi, size);
		
	}
}

int partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi];
	int i = lo - 1;
	int j, temp;
	for (j = lo; j <= hi - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			if (i != j)
			{
				print_array(array, size);
			}
			
		}
	}
	temp = array[i + 1];
	array[i + 1] = array[hi];
	array[hi] = temp;
	if (i + 1 != hi)
	{
		print_array(array, size);
	}
	return (i + 1);
}