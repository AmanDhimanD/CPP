// a class is a template for objects, and an object is an instance of a class.
/* 
fruit-->is the class 
    ->apple
    ->banana
    ->mango and etc are the object of the fruit 
 */
#include <bits/stdc++.h>
using namespace std;
class MyClass //class
{
private: //Access  specifier
public: //Access  specifier
    int myID; //attribute
    string myName; //attribute
};
int main()
{
    MyClass obj; // Create an object of MyClass

    // Access attributes and set values
    obj.myID = 23;
    obj.myName = "Rayne";

    //Print the attribute values
    cout << obj.myID << endl;
    cout<<obj.myName<<endl;

    cout<<"\tMultiple Objects "<<endl;
    MyClass objMul;
    objMul.myID = 12;
    objMul.myName = "Coder";
    cout << objMul.myID << endl;
    cout << objMul.myName << endl;

    return 0;
}



