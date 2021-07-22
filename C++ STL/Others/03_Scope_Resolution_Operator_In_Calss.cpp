//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Operator
{
public:
    void speed();
    static int a;
};
void Operator::speed()
{
    int s = 50;
    cout << "speed:- " << s<<endl;
}

int Operator ::a = 50;
int main()
{
    Operator o;
    o.speed();

    cout << Operator::a;

    return 0;
}