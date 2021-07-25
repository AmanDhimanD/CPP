//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class CopyConstructor{
    int a;
public:
    CopyConstructor()
    {
        a = 0;
    }
    CopyConstructor(int x){
        a = x;
    }
    CopyConstructor(CopyConstructor &obj){
        cout<<"Copy Constructor called !!!"<<endl;
        a = obj.a;
    }
    void display(void){
        cout << "A is :- " << a<<endl;
    }
};
int main()
{
    CopyConstructor c1, c2, c3;
    c1.display();
    c2.display();
    c3.display();

    CopyConstructor obj(c1);
    obj.display();

    cout<<"Invoked"<<endl;
    CopyConstructor cc = c2;

    return 0;
}