// The word polymorphism means having many forms
/* Overloading
   Overridding
*/

//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Animals{
    public:
        void eat(){
            cout<<"Eating....."<<endl;
        }
};
class horse: public Animals{
    public: 
        void eat(){
            cout<<"Eating Grass."<<endl;
        }
};
int main()
{
    // Animals h = horse();
    horse h = horse();
    h.eat();
    return 0;
}