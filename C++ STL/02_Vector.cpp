#include <iostream>
#include<vector>
using namespace std;
int main()
{   
    //vector is Dynamic 
    //we can increase or decrease the size 
    //every time capacity double of the vector
    //capacity :- Size of vector 
    //size :- number of elements

    vector<int> v;

    //intialization
    vector<int> a(5, 1);

    //all vector initilize with 1 ---> (5,1) ----> 5 vector with value 1 

    cout<<"Print a"<<endl;
    for (int i:a)
    {
        cout << i << " ";
    }
    cout << endl;

    //Copy the vector
    vector<int> last(a);
    cout << "Print Last" << endl;
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    cout<<"Capacity of V:- "<<v.capacity()<<endl; //0
    cout << "Size :- " << v.size() << endl;

    v.push_back(1);
    cout<<"Capacity of V:- "<<v.capacity()<<endl; //1
    cout << "Size :- " << v.size() << endl;

    v.push_back(3);
    cout<<"Capacity of V:- "<<v.capacity()<<endl; //2
    cout << "Size :- " << v.size() << endl;

    //it double the capacity of vector
    v.push_back(4);
    cout<<"Capacity of V:- "<<v.capacity()<<endl; //4
    cout << "Size :- " << v.size() << endl;

    cout<<"Element at 2 index :- "<<v.at(2)<<endl;

    cout << "First Elements:- " << v.front() << endl;
    cout << "Last Elements:- " << v.back() << endl;

    //pop opreation
    cout << "Before pop" << endl;
    for (int i:v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "After Pop:- "<<endl;
    for (int i:v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Before Clear size :- " << v.size() << endl;
    v.clear();
    cout << "After Clear size :- " << v.size() << endl;
    return 0;
}