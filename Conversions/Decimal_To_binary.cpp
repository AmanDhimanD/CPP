#include <iostream>
using namespace std;
void DecToBinary(int n)
{   
    int binaryArray[40];
    int i=0;
    while (n>0)
    {   
        binaryArray[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>0;j--)
    {
        cout<<binaryArray[j];
    }    
}
int main()
{
    int n=16;
    DecToBinary(n);
    return 0;
}