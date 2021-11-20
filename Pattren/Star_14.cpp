//#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    /*
    A
    A B
    A B C
    A B C D
    A B C D E
     */
    for (int i = 0; i < n; i++)
    {
        char A = 65;
        for (int j = 0; j <=i; j++)
        {
            cout << char(A++) << " ";
        }
        cout << endl;
    }
    return 0;
}