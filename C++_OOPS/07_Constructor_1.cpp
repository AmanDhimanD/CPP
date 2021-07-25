//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class cons{
    int a, b;
    public:
        cons(void);
        ~cons(void);
        void print(void);
};

cons :: cons(){
    a = 21;
    b = 22;
}

void cons :: print(void){
    cout << "a : " << a << endl<< "b : "<< b;
}
int main(){
    cons c;
    c.print();
    return 0;
}