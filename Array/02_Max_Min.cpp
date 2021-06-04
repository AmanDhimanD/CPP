#include <iostream>
#include <climits>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for ( int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maxNum=INT32_MIN;
    int minNum=INT32_MIN;
    for (int i = 0; i < n; i++)
    {   
        maxNum=max(maxNum,arr[i]);
        minNum=min(minNum,arr[i]);
        cout<<maxNum<<"  "<<minNum;

    }
    return 0;
}