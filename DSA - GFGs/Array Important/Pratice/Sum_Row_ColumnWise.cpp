//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
    int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cout <<"\t\t" <<arr[i][j] << " ";
            sum += arr[i][j];
        } 
        cout << "\t----> Rowwise ----> " << sum;
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
    int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[j][i];
        }
    cout << "\t-> Columnwise -> " << sum;
    }
    

    return 0;
}