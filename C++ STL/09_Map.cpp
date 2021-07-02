#include <iostream>
#include <map>

using namespace std;
int main()
{
    // combination of a key value and a mapped value
    map<int, string> m;
    m[1] = "Rayne";
    m[2] = "Coder";
    m[6] = "YouTuber";

    //insert done also by
    m.insert({7, "Ram"});

    cout << "Key Values are :-" << endl;
    for(auto i:m)
    {
        cout << i.first <<" "<<i.second<< endl;
    }
    cout<<"Finding  2 key value(true 1 or f 0):- "<<m.count(2)<<endl;

    m.erase(6);
    cout<<"After Erase"<<endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout<<endl;

    auto it = m.find(7);
    for (auto i = it; i != m.end();i++)
    {
        cout<<(*i).first<<endl;
    }
    
    return 0;
}