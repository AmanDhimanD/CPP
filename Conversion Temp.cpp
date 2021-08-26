
#include<iostream>
using namespace std;
int main()
{
float cel , far;
cout<<"Enter Temperature in Farenheit : ";
cin>>far;
cel=(far - 32) * 5/9;
cout<<"Temperature in Celsius is : " <<cel<<endl;
return 0;
}
