//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Box{
    int width;

    public:
        friend void print(Box b);
        void setWidth(int w);
};
void Box :: setWidth(int w){
    width = w;
}
void print(Box b){
    cout << b.width << endl;
}
int main()
{
    Box b1;
    b1.setWidth(10);
    print(b1);
    return 0;
}