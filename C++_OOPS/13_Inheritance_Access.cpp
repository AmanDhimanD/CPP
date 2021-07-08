/* Protected Access Specifiers */

//#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class baseClass
{
protected:
    int salary;
};
class DerivedClass : public baseClass
{
public:
    int bouns;
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};
int main()
{
    DerivedClass Obj;
    Obj.setSalary(12000000);

    Obj.bouns = 100000;
    cout << "Bouns -> " << Obj.bouns << endl;
    cout << "Salary -> " << Obj.getSalary();
    return 0;
}