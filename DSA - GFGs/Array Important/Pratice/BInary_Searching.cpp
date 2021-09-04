//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int a[], int key, int size)
{
    int s = 0, e = size;
    for (int i = 0; i < size; i++)
    {
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (a[mid] == key)
                return mid+1;
            else if (a[mid] > key)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    cout << BinarySearch(arr, 2, 8);
    return 0;
}