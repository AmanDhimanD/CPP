//#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (k % 2 != 0)
            {
                cout << setw(2)<<k++ << " ";
                k++;
            }
        }
        cout << endl;
    }
    return 0;
}