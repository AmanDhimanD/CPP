//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int moveArray(int arr[],int n)
{
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0)
            arr[counter++] = arr[i];
    }
    while (counter<n)
    {
        arr[counter++] = 0;
    }   
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 0, 0, 0, 7, 8, 9};
    moveArray(a, 11);
    for (int i = 0; i < 11; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n\tTIME COMPLIXITY IS O(n)" << endl;
    cout << "\tSPACE COMPLIXITY IS O(1)" << endl;
    return 0;
}