#include <iostream>
#include<array>
using namespace std;
int main()
{
    int basicArr[]={1,2,3,4,5};

    //it is also Static 
    array<int, 5> arr = {1, 2, 3, 4, 5};
    int size = arr.size();
    for (int  i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << "Elements at 3 index :- " << arr.at(2) << endl;
    cout<<"Empty (1) or Not Empty (0) :- "<<arr.empty()<<endl;

    cout << "First Elements:- " << arr.front() << endl;
    cout << "Last Elements:- " << arr.back() << endl;
    return 0;
}