#include <iostream>
using namespace std;
class Sum
{
public:
    int sum2()
    {
        int x, y;
        cout<< "Enter 2 numbers :- " << endl;
        cin >> x >> y;
        cout<<"SUM :- > "<<x+y<<endl;
    }
    int sum3()
    {
        int x,  y,  z;
        cout << "Enter 3 numbers :- " << endl;
        cin >> x >> y >> z;
        cout<<"SUM :- > "<<x+y+z<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter 1 for the sum of two Number \n2 for the three number sum ."<<endl;
    cin >> n;
    if(n==1)
    {
        Sum s1;
        s1.sum2();
    }
    else
    {
        Sum s1;
        s1.sum3();
    }
    return 0;
}