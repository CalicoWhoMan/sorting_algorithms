#include "sort.h"

/**
 * selection_sort - Selection Sorting
 * @array: Array
 * @size: Size of array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t nex, same, inc;
	int i;

	for (nex = 0; nex < size - 1; nex++)
	{
		same = nex;
		for (inc = same + 1; inc < size; inc++)
		{
			if (array[inc] < array[same])
			{
				same = inc;
			}
		}
		if (same != nex)
		{
			i = array[nex];
			array[nex] = array[same];
			array[same] = i;
			print_array(array, size);
		}
	}
}
