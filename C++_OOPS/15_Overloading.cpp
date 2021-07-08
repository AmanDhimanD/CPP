//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class over{
    public:
        static int sum(int a,int b)
        {
            return a + b;
        }
        static int sum(int a,int b,int c)
        {
            return a + b+c;
        }
};
int main()
{
    over i;
    int a=i.sum(12, 23);
    int b = i.sum(12, 23, 34);
    cout<<a<<endl<<b<<endl;
    return 0;
}