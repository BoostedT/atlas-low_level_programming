#include "search_algos.h"

/**
 * binary_search - searches for an element in an array using binary search
 * @arr: array to search
 * @n: number of elements in the array
 * @x: element to search for
 * Return: index of the element if found, -1 otherwise
 */
int binary_search(int arr[], int n, int x)
{
int left = 0, right = n - 1, mid, i;

while (left <= right)
{
printf("Searching in array: ");
for (i = left; i <= right; i++)
{
if (i == right)
printf("%d\n", arr[i]);
else
printf("%d, ", arr[i]);
}
mid = left + (right - left) / 2;
if (arr[mid] == x)
return (mid);
else if (arr[mid] < x)
left = mid + 1;
else
right = mid - 1;
}
return (-1);
}
