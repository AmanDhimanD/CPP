//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //>>>>>>Dynamic Allocation 
    int i = 10;
    //copy of i
    int &p = i; //no space create for the p, get same space in symbol table like i
    cout<<i<<endl;

    i++; //that why i will be increase by 1
    cout<<i<<endl; 


    return 0;
}