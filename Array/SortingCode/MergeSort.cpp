#include <iostream>
using namespace std;
void printArr(int arr[], int size);
void merge(int *arr, int low, int high, int mid)
{

    int i, j, k, tempArr[50];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            tempArr[k++] = arr[i++];
        }
        else
        {
            tempArr[k++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        tempArr[k++] = arr[i++];
    }
    while (j <= high)
    {
        tempArr[k++] = arr[j++];
    }
    for (i = 0; i < k; i++)
    {
        arr[i] = tempArr[i];
    }
}

void mergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, high, mid);
    }
}
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 4, 2, 3, 7, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    // printArr(arr, size);
    mergeSort(arr, 0, size - 1);
    printArr(arr, size);

    return 0;
}