//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class defCoordinate
{
private:
    int a, b;

public:
    
    //Default Constructor
    defCoordinate(){}
    defCoordinate(int x = 0, int y = 2)
    {
        a = x;
        b = y;
    }
    void print(void)
    {
        cout << "X-axis :- " << a << endl
             << "Y-axis :- " << b << endl;
    }
};

// defCoordinate::defCoordinate(int x, int y)
// {
//     a = x;
//     b = y;
// }

int main()
{
    //Default COnstructor
    defCoordinate d1(1,2), d2(2,1), d3(21,2);

    defCoordinate c1(2, 3);
    c1.print();

    cout << endl;

    return 0;
}