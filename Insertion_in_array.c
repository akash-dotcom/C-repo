#include <stdio.h>

//Code for Traversal
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int element, int capacity, int index)
{
    //Code for Insertion
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
    int arr[100] = {1, 2, 6, 15, 18};
    int size = 5;
    int element = 11, index = 3;
    display(arr, size);
    indInsertion(arr, size, element, 100, index);
    size++;
    display(arr, size);

    return 0;
}