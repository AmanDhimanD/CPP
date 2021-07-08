
#include <bits/stdc++.h>

using namespace std;
class MyClass
{
public:
    int num1;
    int num2;
    //Constructor with parameter
    MyClass(int n1, int n2);
};

 MyClass::MyClass(int n1, int n2){
    cout << "Costructor With parameter And Outside the class." << endl;
    num1 = n1;
    num2 = n2;
    cout << "Value of n1 and n2 are " << n1 << " And " << n2 << endl;
} 
int main()
{
    MyClass obj(12, 23); //auutomatic call the constructor

    // print the value of class
    cout << "Class Attributes." << endl;
    cout << obj.num1 << endl;
    cout << obj.num2 << endl;

    return 0;
}