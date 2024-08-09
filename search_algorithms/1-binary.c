#include "search_algos.h"

/**
 * binary_search - searches for an element in an array using binary search
 * @arr: array to search
 * @l: number of elements in the array
 * @r: element to search for
 * Return: index of the element if found, -1 otherwise
 */
int binary_search(int arr[], int l, int r)
{
    int m;
    if (r >= l)
    {
        m = l + (r - l) / 2;
        printf("Searching in array: ");
        while (l <= r)
        {
            printf("%d", arr[l]);
            if (l < r)
                printf(", ");
            l++;
        }
        printf("\n");
        if (arr[m] == x)
            return m;
        if (arr[m] > x)
            return binary_search(arr, l, m - 1);
        return binary_search(arr, m + 1, r);
    }
    return -1;
}
int binary_search(int arr[], int n, int x)
{
    return binary_search(arr, 0, n - 1);
}
