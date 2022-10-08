//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void insertionSort(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        //cout << i << "  ";
        int key = arr[i];
        //cout << "key " << key << " ";
        int j = i - 1;
       // cout << j << "  " << endl;
        while (key < arr[j] && j >= 0)
        {
            //cout << "Inside While  ";
            arr[j + 1] = arr[j];
            j--;
            //cout << j;
        }
        arr[j + 1] = key;
        //cout << "Come outside " << endl;
    }
}
int main()
{
    int arr[] = {1, 4, 2, 3, 7, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size - 1);
    printArr(arr, size);
    return 0;
}