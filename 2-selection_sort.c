#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: the poiter to the array
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
int tmp, tmp_2;
if (!array)
{
return;
}
for (size_t i = 0; i < size - 1; i++)
{
tmp = i;
for (size_t j = i + 1; j < size; j++)
{
if (array[j] < array[tmp])
{
tmp = j;
}
}
if (array[i] != array[tmp])
{
tmp_2 = array[i];
array[i] = array[tmp];
array[tmp] = tmp_2;
print_array(array, size);
}
}
}
