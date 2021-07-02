#include <iostream>
#include <set>

using namespace std;
int main()
{
    set<int> s;
    //element not repeat in set
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
  
    for (int i:s)
    {
        cout << i << endl;
    }

    // s.erase(s.begin());
    // cout<<"After erase Elements are :- "<<endl;
    // for (int i:s)
    // {
    //     cout << i << endl;
    // }

    //Iterator
    cout << "After Iterator"<<endl;
    set<int>::iterator it = s.begin();
    it++;
        s.erase(it);
        for (int i:s)
        {
            cout << i << endl;
        }

    //count
    cout << "How many 2 Present in the set ? " << s.count(2)<<endl;

    //find
    set<int>::iterator itr = s.find(1);

    cout << "Value present at itr:- "<<*itr<<endl;

        return 0;
}