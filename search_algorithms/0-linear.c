#include "search_algos.h"

/**
 * linear_search - searches for an element in an array using linear search
 * @arr: array to search
 * @n: number of elements in the array
 * @x: element to search for
 * Return: index of the element if found, -1 otherwise
 */
int linear_search(int arr[], int n, int x) 
{
for (int i = 0; i < n; i++) 
{
if (arr[i] == x) 
{
return i;
}
}
return -1;
}
