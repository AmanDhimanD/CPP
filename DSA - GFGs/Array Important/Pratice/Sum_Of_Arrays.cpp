//#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a[] = {2, 3, 4, 5};
    int b[] = {4, 5, 6, 7};
    int sum[4] = {0};
    for (int  i = 0; i < 4; i++)
    {
        sum[i] = a[i] + b[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cout<<sum[i]<<" ";
        sum[i]*= 2;
    }
    sum[0]*= 2; //double the only 0 index elements
    cout<<"\nDouble of Sum :- "<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<sum[i]<<" ";
    }
    
    
    return 0;
}