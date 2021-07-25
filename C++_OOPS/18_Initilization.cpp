//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Test{
    int a;
    int b;
    public :
        // Test(int i,int j) : a(i),b(j)
        // Test(int i,int j) : a(i),b(j+1)
        // Test(int i,int j) : a(i),b(j+a)
        // Test(int i,int j) : a(i+b),b(j) //b not get value yet
        Test(int i,int j) : a(i)
        {
            b = j;
            cout<<"Value of a :- "<<a<<endl;
            cout<<"Value of b :- "<<b<<endl;
        }
};
int main()
{
    Test t(3,5);
    return 0;
}