/* 
    Inheritance -> Done with Attributes and Methods.
    **********
    Base Class (parent) 
    Derived Class (child) -> Inherit the Property of Base Class.
*/

//#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class Emp{
    public:
        int id = 101;
        string company = "TATA";
        void details(){
            cout<<"TATA is the best."<<endl;
        }
};
class Branch : public Emp{
    public:
        string dept = "MCA";
};
int main()
{
    Branch Obj;
    Obj.details(); //call the parent class method by child class object

    cout<<Obj.dept +" " + Obj.company <<endl;
    return 0;
}
