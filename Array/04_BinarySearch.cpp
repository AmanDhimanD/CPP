/* 
Worst complexity: O(log n)
Average complexity: O(log n)
Best complexity: O(1)
Space complexity: O(1)
*/
#include <iostream>

using namespace std;
int BinarySearch(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        int s = 0, e = n;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (arr[mid] == key)
            {
                return mid;
            }
            else if (arr[mid] > key)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Key:- ";
    cin >> key;
    cout << BinarySearch(arr, n, key);

    return 0;
}