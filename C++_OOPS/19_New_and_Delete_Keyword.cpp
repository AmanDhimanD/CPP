//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 34;
    cout << "Num is " << num << endl;

    int *arr = new int[3];
    arr[0] = 1;
    *(arr + 1) = 2;
    arr[2] = 3;

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }

    delete arr;
    cout << "Delete the arr" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}