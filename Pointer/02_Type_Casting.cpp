//#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i = 65;
    // char c = i; //Implicit Typecasting 
    
    char *c = (char*)i; 
    
    cout<<c<<endl;  


    return 0;
}