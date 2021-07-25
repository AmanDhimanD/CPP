//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class cons
{
    int a, b;

public:
    cons(int,int);
    void print(void);
};

cons ::cons(int x,int y)
{
    a = x;
    b = y;
}

void cons ::print(void)
{
    cout << "a : " << a << endl
         << "b : " << b<<endl;
}
int main()
{
    //implicit call
    cout << "Implicit Call :-" << endl;
    cons c1(2,3);
    c1.print();

    cout << "Explicit Call :-" << endl;
    cons c2 = cons(2, 4);
    c2.print();
    return 0;
}