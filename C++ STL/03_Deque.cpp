#include <iostream>
#include<deque>
using namespace std;
int main()
{
    //insertion Deleteion can done both sides beg or last
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d)
    {
        cout << i << " ";
    }
    cout << endl;

    // d.pop_front();
    // cout << endl;
    // for(int i:d)
    // {
    //     cout <<"After Pop :- " <<i << " "<<endl;
    // }
    // cout << "Element at 2 index :- " << d.at(0) << endl;

    cout << "First index Elements :- " << d.at(1) << endl;

    cout << "Front " << d.front() << endl;
    cout << "Back " << d.back() << endl;

    //delete the element
    cout << "Before Erase :- " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After Erase :- " << d.size() << endl;
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;



    
    return 0;
}