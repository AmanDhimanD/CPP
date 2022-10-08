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
void BubbleSort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
       for (int j = 0; j < size-i-1; j++)
       {
            if(arr[j]>arr[j+1]){
                swap(&arr[j], &arr[j + 1]);
            }
       }
   }

}

int main()
{
    int arr[] = {1, 4, 2, 3, 7, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, size);
    printArr(arr, size);
    return 0;
}
