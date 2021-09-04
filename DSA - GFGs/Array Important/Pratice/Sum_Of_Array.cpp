//#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a[] = {2, 3, 4, 5, 6, 8};
    int n = sizeof(a) / sizeof(a[0]);
    int sum = 0;
    for (int  i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum<<" ";
    return 0;
}