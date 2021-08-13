#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> v;
    int n,i,x,a,b,c,siz; //x - position, b - Start, c - end
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    cin>>x;
    cin>>b>>c; //b to c erase 
    v.erase(v.begin()+x-1);
    v.erase(v.begin()+b-1,v.begin()+c-1);
    siz=v.size();
    cout<<siz<<endl;
    for(i=0;i<siz;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
