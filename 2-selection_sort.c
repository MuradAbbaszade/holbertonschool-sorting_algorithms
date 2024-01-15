#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * selection_sort - sorting algorithm
 * @array:array
 * @size:size
 * Return:nothing
 */
void selection_sort(int *array, size_t size)
{
size_t j = 0;
size_t i = 0;
int min;
int min_index;
int temp = 0;

for (i = 0 ; i < size - 1 ; i++)
{
min = array[i];
for (j = i ; j < size ; j++)
{
if (array[j] < min)
{
min = array[j];
min_index = j;
}
}
if (array[i] > array[min_index])
{
temp = array[i];
array[i] = array[min_index];
array[min_index] = temp;
print_array(array, size);
}
}
}
