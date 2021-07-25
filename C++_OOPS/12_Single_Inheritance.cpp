//#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Base
{
    int data1; //its is not inherted by dervied class
public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
//set the data of Base class
void Base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int Base ::getdata1()
{
    return data1;
}
int Base ::getdata2()
{
    return data2;
}

// Create the Dervied Class
//inhert the base Class
/*
derived class syntax :- 

class {{derived-class-name}} : {{visiblity-mode}} {{base-class-name}}
{
    class member/methods/etc....
}
*/

class Derived : public Base
{
    int data3;

public:
    void process();
    void display();
};
//make function of dervied class
void Derived ::process()
{
    data3 = data2 * getdata1();
}

void Derived ::display()
{
    cout << "BaseClass(private-default) - \a Data 1 : " << getdata1() << endl;
    cout << "BaseClass(public) - \a Data 2 : " << data2 << endl;
    cout << "DerivedClass - \a Data 3 : " << data3 << endl;
}

int main()
{
    Derived der;
    der.setdata();
    der.process();
    der.display();

    return 0;
}