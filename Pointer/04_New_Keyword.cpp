//->>>>>>Dynamic Allocation <<<<<<-
//#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int *p = new int; //Create in HEAP 
    *p = 10;
    cout << p << endl; //Address 
    cout << *p << endl; //Data

    int *pa = new int[50];
    cout<<pa[0]<<endl; //address of the 0
    cout << pa[50] << endl; //address of the 50

    delete p; //delete p
    delete [] pa; //Delete array with this method 

    return 0;
}