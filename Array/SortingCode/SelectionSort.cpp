//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void selectionSort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
        {
            swap(&arr[minIndex], &arr[i]);
        }
    }
}
int main()
{
    
    int arr[] = {1, 4, 2, 3, 7, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);
    printArr(arr, size);

    return 0;
}