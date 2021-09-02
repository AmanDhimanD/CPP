//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int cyclicRotation(int arr[],int n)
{
    int i;
    int x = arr[n-1];
    for (i = n - 1; i > 0;i--)
    {
        arr[i] = arr[i - 1];
    }
        arr[0] = x;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5}, i;
    int n = sizeof(a) / sizeof(a[0]);

    cyclicRotation(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    

    return 0;
} 