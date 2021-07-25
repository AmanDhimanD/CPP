//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class coordinate
{
private:
    int a,b;
public:
    // Method 1 :- 
    coordinate(int, int);

    // Method 2 :- 
    coordinate(int x){
        a = x;
        b = 0;
    }

    //Default Constructor
    coordinate(int x = 0, int y = 2)
    {
        a = x;
        b = y;
    }
    void print(void){
        cout << "X-axis :- " << a << endl
             << "Y-axis :-" << b << endl;
    }
};

coordinate::coordinate(int x,int y)
{
    a = x;
    b = y;
}

int main(){
    coordinate c1(2, 3);
    c1.print();

    cout<<endl;

    coordinate c2(1);
    c2.print();
    cout<<"Y=0"<<endl;
    return 0;
}