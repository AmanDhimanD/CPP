
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
  
   int s[] = {1,2,4,5,7,1,2,3,1};
   int size = sizeof(s)/sizeof(s[0]);
  
   map<int,int>m;
   for(long i=0;i<size;i++){
         m[s[i]]++;
   }
   map<int , int >::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++){
         cout<<itr->first<<"-"<<itr->second<<endl;
   }
    return 0;
}
