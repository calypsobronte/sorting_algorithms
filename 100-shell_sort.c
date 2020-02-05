#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending order using
 * the Shell sort algorithm, using the Knuth sequence
 * @array: array to sorted
 * @size: size of array
 */

void shell_sort(int *array, size_t size)
{
size_t gap = 1, i = 0, j = 0;
int tmp;

if (size > 1)
{
while (gap <= size / 3)
gap = gap * 3 + 1;
while (gap > 0)
{
for (j = gap; j < size; j++)
{
tmp = array[j];
i = j;
while (i > gap - 1 && (array[i - gap] >= tmp))
{
array[i] = array[i - gap];
i -= gap;
}
array[i] = tmp;
}
gap = (gap - 1) / 3;
print_array(array, size);
}
}
}