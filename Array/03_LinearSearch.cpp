/* 
Time Complexity and Space Complexity are O(n).
**********************************************
Worst complexity: O(n)
Average complexity: O(n)
Space complexity: O(1)
Worst-case space complexity: O(1) iterative
Average performance: O(n/2)
**********************************************
 */

#include <iostream>
using namespace std;
int LinearSearching(int arr[], int n, int key)
{
    int i;
     for (i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
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
    cout<<"Key:- ";
    cin>>key;
    cout<<LinearSearching(arr,n,key);

    return 0;
}