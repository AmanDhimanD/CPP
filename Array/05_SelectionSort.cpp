/* 
Worst-case performance	О(n2) comparisons, О(n) swaps
Best-case performance	О(n2) comparisons, O(1) swaps
Average performance	О(n2) comparisons, О(n) swaps
Worst-case space complexity	O(1) auxiliary
*/
#include <iostream>
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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        cout << "\t" << arr[i];
    }
    return 0;
}