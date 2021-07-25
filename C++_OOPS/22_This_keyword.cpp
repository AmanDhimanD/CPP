//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class test
{
    int id;
    string name;

public:
    // Method :- 1 
    void setData(int id, string n)
    {
        this->id = id;
        this->name = n;
    }
    // Method :- 2 Referencing 
    test& setData(int id)
    {
        this->id = id;
        return *this;
    }
    void getData()
    {
        cout << "By this keyword, ID   ::- " <<setw(3)<< id << endl;
        cout << "By this keyword, name ::- " <<setw(3)<< name << endl;
    }
};
int main()
{

    test t;
    t.setData(21, "Rayne");
    t.getData();
    t.setData(23);
    t.getData();
    return 0;
}