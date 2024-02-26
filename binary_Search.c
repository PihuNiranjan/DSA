#include <stdio.h>
int binarsearch(int arr[], int size, int element)
{
    int low = 0, mid, high;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {0,1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binarsearch(arr, size, 0);
    if (result == -1)
    {
        printf("element is absent\n");
    }
    else
    {
        printf("element is present at index of %d \n", result);
    }
    return 0;
}