/* 
    A class is said to be Multilevel inheritance.
    Drived class inherit from a class and this class also inherit one more class.
*/

//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class GrandFather
{   
    public:
        void GFather(){
            cout<<"Base Class (Grand Father)."<<endl;
        }
};
class Father:  public GrandFather{
    public:
    void f(){
    cout<< "This is father's Class (Inherit by GrandFather's)." << endl;
    }
};

class Child: public Father{
    public:
    void c(){
    cout<<"Child."<<endl;
    }
};
int main()
{
    Child obj;
    obj.GFather();
    obj.f();
    obj.c();
    
    cout<<"\tOne more object of Father's\n"<<endl;
    Father Obj1;
    Obj1.GFather();
    Obj1.f();
    return 0;
}