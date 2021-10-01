//#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i=10;
    int *p;
    p = &i;
    cout << "i :-  " << i << endl;  //Value of i
    cout << "p :-  " << p << endl;  //Address of i
    cout << "&p :-  " << &p << endl; //Value of i with pointer p
    cout << "*p :-  " << *p << endl; //Value of i with pointer p

    int **dp;
    dp = &p;

    cout<<"dp :-  "<<dp<<endl; //Address of p
    cout << *dp << endl; //Address of i
    cout << **dp << endl; //Value of i
    return 0;
}