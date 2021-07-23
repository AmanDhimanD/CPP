#include<bits/stdc++.h>    
using namespace std;
int main()
{
    vector<int> v{1,3,5,6};
    // v.push_back(1);
    // v.push_back(4);
    // v.push_back(3);
    // v.push_back(7);
    // v.push_back(5);

    sort(v.begin(), v.end());
    cout << "Sorted :- "<<endl;
    for (auto x:v)
    {
        cout << x << endl;
    }
    return 0;
}