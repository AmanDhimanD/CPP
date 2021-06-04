/* 
   Subarray :- Continuous part of the array 
***************************************
   Number of subarray of an array with n elements = n C 2 + n = n * (n+1) / 2

***************************************
NOTE :- Every Subarray is a Subsquence but every Subsquence is not a Subarray. 
***************************************
*/
/* Subsequence :- A subsequence is a sequence that can be derived an array by selecting zero or more elements, without changing the order of the remaining elements. 
***************************************
    Number of subsequences of an array with n elements = 2^n
***************************************
*/
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Sum of the Subarray:-\n";
    int current=0;
    for ( i = 0; i < n; i++)
    {
        current=0;
        for (int j = i; j < n; j++)
        {
            current+=arr[i];
            cout<<current<<endl;
        }
    }
    return 0;
}