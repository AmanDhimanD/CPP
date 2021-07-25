/* class A
{
public:
    void show()
    {
        cout << "Hello form A \n";
    }
};

class B : public A
{
};

class C : public A
{
};

class D : public B, public C
{
};

int main()
{
    D object;
    object.show();
} */
//_________________________________________//
//it show the error of Ambiguous 
//TO SLOVE this problem we use VIRTUAL CLASS

#include <iostream>
using namespace std;

class A
{
public:
    int a;
    A() // constructor
    {
        a = 10;
    }
};

class B : public virtual A
{
};

class C : public virtual A
{
};

class D : public B, public C
{
};

int main()
{
    D object; // object creation of class d
    cout << "a = " << object.a << endl;

    return 0;
}
