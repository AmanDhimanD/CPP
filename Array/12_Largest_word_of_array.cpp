#include <iostream>

using namespace std;
int main()
{

    int n;
    cout << "Enter length of string:- ";
    cin >> n;
    cin.ignore();

    char arr[n + 1];
    cin.ignore();

    int i = 0;
    int currLength = 0, maxLength = 0;
    int startWord = 0, maxWord = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currLength > maxLength)
            {
                maxLength = currLength;
                maxWord = startWord;
            }
            currLength = 0;
            startWord = i + 1;
        }
        else
        currLength++;
        if (arr[i] == '\0')
            break;

        i++;
    }
    cout << maxLength << endl;
    for (int i = 0; i < maxLength; i++)
    {
        cout << arr[i + maxWord];
    }

    return 0;
}