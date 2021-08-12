#include <iostream>
using namespace std;
int main() {
    int a=4,b=5;
    cout<<a<<" "<<b<<endl;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b<<endl;
    
//     a=a*b;
//     b=a/b;
//     a=a/b;
//     cout<<a<<" "<<b<<endl;
    return 0;
}
