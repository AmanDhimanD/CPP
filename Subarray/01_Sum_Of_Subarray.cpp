#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n = 4;
    int arr[n];
    int i = 0, j = 0, k = 0;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxSum = INT_MIN, sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            for (k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            maxSum = max(maxSum, sum);
        }
    }
    cout << maxSum << endl;
    return 0;
}