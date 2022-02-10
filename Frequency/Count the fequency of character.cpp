//Find the existing number of elements in the array 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s="aman is a boy";
   map<char,int>m;
   for(long i=0;i<size;i++){
         m[s[i]]++;
   }
   map<char , int >::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++){
         cout<<itr->first<<"-"<<itr->second<<endl;
   }
    return 0;
}
