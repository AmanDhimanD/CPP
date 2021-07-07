/* 
A constructor in C++ is a special method that is automatically called when an object of a class is created. 
->  
*/
//#include <iostream>
#include <bits/stdc++.h>

using namespace std;
class MyClass{
    public :
        //Constructor
        MyClass(){
            cout << "Costructor Without parameter."<<endl;
        }
};
int main()
{
    MyClass obj; //auutomatic call the constructor
    return 0;
}