//Time complexity 0(n)
#include <iostream>

using namespace std;
int main()
{
    int mx = -199999;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout <<"Max of i-th elements index "<<i<<"->>"<<mx << endl;
    }

    return 0;
}