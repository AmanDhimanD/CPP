// methods are like a functions.
/*  
    Two ways 
        ->inside the class
        ->outside the class
 */

//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Myclass
{
public:
    // Method/Functions inside the class
    // void MyMethod(){
    //     cout<<"I am a Method."<<endl;
    // }
    void MyMethod(); //to make outside method
};
void Myclass::MyMethod() //Outside Method
{
    cout << "I am a Method outside the Class." << endl;
}
int main()
{
    Myclass obj;
    obj.MyMethod();
    return 0;
}
