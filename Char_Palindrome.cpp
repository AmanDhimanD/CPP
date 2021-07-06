//#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int size;
    cin >> size;
    char arr[size+1]; //+1 for the null charactar
    cin >> arr;
    bool check = 1;
    for (int i = 0; i < size;i++)
    {
        if(arr[i]!=arr[size-1-i])
        {
            check = 0;
            break;
        }
    }
    if(check==true)
    {
        cout<<"Word is palindrome" <<endl;
    }
    else{
        cout << "Word is not palindrome" << endl;
    }
    return 0;
}
