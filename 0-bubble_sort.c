#include <stdio.h>
#include "sort.h"
#include <stdlib.h>
/**
 * bubble_sort - sorting algorithm
 * @array: array
 * @size: size
 * Return: nothing 
 */
void bubble_sort(int *array, size_t size)
{
int j = size;
int i = 0;
int temp = 0;
 
for (j = size ; j > 0 ; j--)
{
for (i = 0 ; i + 1 < size ; i++)
{
if (array[i] > array[i + 1])
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
print_array(array,size);
}
}
}
}
