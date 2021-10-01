//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int const i = 10;
    int const *p = &i;
    p = 13;

    cout << p;

    return 0;
}