#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter length of string:- ";
    cin >> n;
    char arr[n];
    cout<<"Enter Array :- ";
    cin >> arr;

    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }
    if (check == true)
    {
        cout << "Word is a palindrome." << endl;
        cout << arr;
    }
    else
    {
        cout << "Word is not a palindrome." << endl;
    }
    return 0;
}