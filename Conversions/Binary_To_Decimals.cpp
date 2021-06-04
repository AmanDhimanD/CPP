#include <iostream>
#include<math.h>

using namespace std;
int binToDecimal(long long n)
{
    int i=0,reminder,decimalNum=0;
    while (n!=0)
    {
        reminder=n%10;
        n=n/10;
        decimalNum+=reminder*pow(2,i);
        ++i;
    }
    return decimalNum;
        
}
int main()
{
    long long n;
    cin>>n;
    binToDecimal(n);
    return 0;
}