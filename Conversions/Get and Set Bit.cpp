
#include <iostream>
using namespace std;
int getBit(int n,int pos){
    int mask=1<<pos; //left side by 2
    return ((n&mask)!=0);
}
int setBit(int n,int pos){
    int mask=1<<pos;
    return (n | mask);
  
}
int main() {
    // cout<<getBit(5,2)<<endl; 
    cout<<setBit(5,1)<<endl;
    return 0;
}
