#include <stdio.h>

// traversal of array
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// insertion in array
int insertarr(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return -1;
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        return 1;
    }
}

int main()
{
    int arr[20] = {1, 2, 3, 6, 5, 9, 8, 7, 89};
    int size = 9, element = 4, index = 3, isinsert;
    printf("\nBefore Inserting ");
    display(arr, 9);
    printf("\nAfter Inserting ");
    isinsert = insertarr(arr, size, element, 20, index);
    if (isinsert == 1)
    {
        display(arr, 9 + 1);
    }
    else
    {
        printf("errorrrrrrrrrrrrrrr");
    }

    return 0;
}