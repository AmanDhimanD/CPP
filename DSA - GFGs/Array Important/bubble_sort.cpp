//#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i = 0, a[] = {1, 2, 3, 4, 5,34,45,2,23,32,5,4,76,874,53,42,32,4,54,56,5},t,j;
    int n = sizeof(a) / sizeof(a[0]);
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}