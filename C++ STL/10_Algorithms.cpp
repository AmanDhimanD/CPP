#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(3);
    v.push_back(4);

    cout << "Searching 3 :-> " << binary_search(v.begin(), v.end(),3) << endl;

    cout << "Lower Bound :-> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    
    cout << "Upper Bound :-> " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    //Maximam and Minimam
    int a = 23;
    int b = 22;
    cout << "Max :- " << max(a,b)<<endl;
    cout << "Min :- " << min(a,b)<<endl;

    cout<<"Before Swap"<<endl;
    cout << "a :- "<<a<<endl<<"b :- "<<b<<endl;
    
    //Swaping
    swap(a, b);
    cout<<"After Swap"<<endl;
    cout << "a :- "<<a<<endl<<"b :- "<<b<<endl;

    //Reversing
    string str = "ABCD";
    reverse(str.begin(), str.end());
    cout << "Reversing String :-> " << str << endl;

    //Rotation
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After Rotatre :- " << endl;
    for(int i:v){
        cout <<i<< " ";
    }
    return 0;
}