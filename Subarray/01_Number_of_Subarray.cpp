#include <bits/stdc++.h>

using namespace std;
int main()
{   
    int n=4;
    int arr[n];
    int i=0,j=0,k=0;
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int temp=0;
    for ( i = 0; i < n; i++)
    {
        for ( j = i; j < n; j++)
        {
            for (k = i; k <=j; k++)
            {
                temp++;
            }
        }
    }
    cout<<temp;
    return 0;
}