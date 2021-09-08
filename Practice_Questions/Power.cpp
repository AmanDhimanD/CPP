//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int p(int b,int po){

    int res=1;
    for (int  i = 0; i < po; i++)
    {
        res = res * b;
    }
    cout<<res<<endl;
    
}
int main()
{
    //p(base, powe);
    p(2, 4);
    return 0;
}
