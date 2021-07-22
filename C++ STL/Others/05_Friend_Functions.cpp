//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Class name can use as a datatype also
class FriendFunction
{
    int a;
    int b;
    friend FriendFunction sumComplex(FriendFunction f1, FriendFunction f2);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void print()
    {
        cout << " :- " << a << " + i " << b << endl;
    }
};
FriendFunction sumComplex(FriendFunction f1, FriendFunction f2) {
    FriendFunction sum;
    sum.setNumber((f1.a + f2.a), (f1.b + f2.b));
    return sum;
}
int main()
{
    FriendFunction c1,c2,sum;
    c1.setNumber(3, 4);
    c1.print();

    c2.setNumber(4, 2);
    c2.print();

    sum = sumComplex(c1, c2);
    sum.print();
    return 0;
}