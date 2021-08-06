#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
  cin>>a;
  cin>>b;
  int len1=a.size();
  int len2=b.size();
  cout<<len1<<" "<<len2<<endl;
  
  string c=a+b;
  cout<<c<<endl;
  char x,y;
  x=b[0];//e
  y=a[0];//a
  
  a[0]=x;
  b[0]=y;
  cout<<a<<' '<<b;
  
  return 0;
}
