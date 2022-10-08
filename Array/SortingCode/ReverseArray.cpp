//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverseArr(int arr[], int size)
{
    int s = 0, e = size - 1;
    while (s <= e)
    {
        swap(arr[s++], arr[e--]);
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
    int arr[] = {12, 10, 5, 2, 20, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, size);
    reverseArr(arr, size);
    cout << endl;
    printArr(arr, size);

    return 0;
}
