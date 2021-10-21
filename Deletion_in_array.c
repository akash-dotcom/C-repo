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

int indDeletion(int arr[], int size, int index)
{
    //Code for Deletion
        for (int i = index; i < size - 1; i++)
        {
            arr[i ] = arr[i+ 1];
        }
}

int main()
{
    int arr[100] = {1, 2, 6, 15, 18};
    int size = 5;
    int element = 11, index = 3;
    display(arr, size);
    indDeletion(arr, size,index);
    size--;
    display(arr, size);

    return 0;
}