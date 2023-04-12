#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * prints_array - prints every subarray in the array
 * @array: a one dimensional array
 * @left: left index array
 * @right: righ index array
 * Return: None
 */

void prints_array(int *array, int left, int right)
{
    printf("Searching in array: ");
    for (; left <= right; left++)
    {
        if (left == right)
        {
            printf("%d", array[left]);
        }
        else
        {
            printf("%d, ", array[left]);
        }
    }
    printf("\n");
}

/**
 * binary_search -  a function that searches for a value in
 * a sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return:the index where value is located
 * If value is not present in array or if array is NULL,
 * your function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
    int left;
    int right;
    int mid_value;

    if (array == NULL)
        return (-1);

    left = 0;
    right = (int)size - 1;

    while (left <= right)
    {
        prints_array(array, left, right);
        mid_value = (left + right) / 2;
        if (array[mid_value] < value)
            left = mid_value + 1;
        else if (array[mid_value] > value)
            right = mid_value - 1;
        else
            return (mid_value);
    }
    return (-1);
}
