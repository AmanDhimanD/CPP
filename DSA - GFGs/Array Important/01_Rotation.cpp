//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int rotation(int arr[],int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1;i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}
int rotationOneByOne(int arr[],int d,int n)
{
    for (int i = 0; i < d; i++)
    {
        rotation(arr, n);
    }
}
void print(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    //cout<<n<<endl;
    rotationOneByOne(arr, 2, n);
    print(arr, n);

    cout<<"\n\tTIME COMPLIXITY IS O(n*d)"<<endl;
    cout<<"\tSPACW COMPLIXITY IS O(1)"<<endl;
    return 0;
}