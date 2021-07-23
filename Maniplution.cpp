#include <iostream>

#include <iomanip>
//set the width in the value printing
using namespace std;
int main()
{
    int a = 4, b = 8, c = 16;
    cout << "a  :- " << setw(4) << a << endl;
    cout << "b  :- " << setw(4) << b << endl;
    cout << "c  :- " << setw(4) << c << endl;
    return 0;
}