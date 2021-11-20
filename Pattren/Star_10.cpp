//#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   /* 
        *
       **
      ***
     ****
    *****
    */
   for (int i = 0; i <= n; i++){
      for (int j = n; j>=1; j--){
          if(i>=j){
              cout << "*";
          }
          else{
              cout << " ";
          }
     }
     cout<<endl;
   }
   return 0;
}