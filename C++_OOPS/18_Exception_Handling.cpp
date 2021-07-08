//#include <iostream>
#include <bits/stdc++.h>

using namespace std;
float division(int x,int y){
    if(y==0)
    {
        throw "Dr. never be zero";
    }
    else
    {
        return x / y;
    }
    
}
int main()
{
    int i, j, k;
    cin >> i >> j;
    try
    {
        k = division(i, j);
        cout << k << endl;
    }
    catch(const char *e)
    {
        cout << e<< '\n';
    }
    
    return 0;
}