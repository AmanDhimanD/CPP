/* Mean : if we have 2 methods in the class with same name and in object creation we give the this method so complier can not understand which one we call( call to the base class or derived class method).
So slove this problem we use this type of program, to call method in another class.
*/
#include <iostream>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2 :: greet(); //use base 2 greet 
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello world" << endl;
    }
};

class D : public B
{
    int a;
    // D's new say() method will override base class's say() method
public:
    void say()
    {
        cout << "Hello my beautiful people" << endl;
    }
};

int main()
{
    // Ambibuity 1
    // Base1 base1obj;
    // Base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // Derived d;
    // d.greet();

    // Ambibuity 2
    B b;
    b.say();

    D d;
    d.say();

    return 0;
}