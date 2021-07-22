//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int global= 34;
int main()
{
    int global = 17;
    cout << "Global value :- " << global<<endl;
    cout << "Global value by Scope resolution operator (::) :- " << ::global<<endl;
    return 0;
}