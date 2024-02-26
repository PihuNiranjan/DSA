#include <stdio.h>
int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            // printf("element is present in index of %d \n", i);
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 6};
    int size = sizeof(arr) / sizeof(int);
    // printf("%d",size);
    int element = 6;
    int result = linearSearch(arr, size, element);
    if (result == -1)
    {
        printf("elelment absent");
    }
    else
    {
        printf("element present");
    }
    return 0;
}
