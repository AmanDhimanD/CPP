//#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 1;
    int b = a++; //b=1 a=2
    cout << b << endl; //b=1
    cout << a << endl; //a=2

    int c = ++a + a++; //a=3 + a=4 => c=7
    cout << c << endl;
    cout << a << endl; //a=4

    int d = c++ + --a + ++b; //c=7 + a=3 + b= 2
    cout << d << endl; //12
    
    return 0;
}