/* 
    Encapsulation :-->  Data is hidden from user.
    Encapsulation is defined as binding together the data and the functions that manipulates them.
    ******* METHODS + VARIABLES *******
    ::::::::
    if want to read and modify the value of private members, You can use getter and setter methods.
    --- Get and Set---
*/
#include <bits/stdc++.h>
using namespace std;
class Freelancer{
    //Private Attribute
    private:
        int salary;
    public:
        //setter
        void setSalary(int sal)
        {
            salary = sal;
        }
        //Getter
        int getSalary()
        {
            return salary;
        }

};
int main()
{
    Freelancer obj;
    obj.setSalary(230000);
    cout<<"Salary Access by getter and setter method :- "<<obj.getSalary()<<endl;
    return 0;
}