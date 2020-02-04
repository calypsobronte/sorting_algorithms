#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: the poiter to the array
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
size_t i = 0, j = 0;
int tmp, tmp_2;
if (!array)
{
return;
}
for (i = 0; i < size - 1; i++)
{
tmp = i;
for (j = i + 1; j < size; j++)
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
