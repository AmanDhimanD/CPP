/* A class is said to be a multiple inheritance if derived class inherit by more than one class.
*/
//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class BaseClass1{
    public:
        void class1(){
            cout<<"Parent class 1 inherit by Child Class."<<endl;
        }
};
class BaseClass2{
    public:
        void class2(){
            cout << "Parent Class 2 inherit by Child Class." << endl;
        }
};
class childClass: public BaseClass1,public BaseClass2{
};
int main()
{
    childClass obj;
    obj.class1();
    obj.class2();
    return 0;
}