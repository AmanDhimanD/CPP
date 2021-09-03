//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reArrangement(int a[],int n)
{
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n;j++)
        {
            if(a[j]==i)
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=i){
            a[i] = -1;
        }
    }
}

int main()
{
    int arr[] = {0,1,5,3,2,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    reArrangement(arr, n);

    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }

        return 0;
}