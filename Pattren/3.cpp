// 5 4 3 2 1 
// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
       for (int j = n; j >0; j--){
           cout << j<<" ";
      }
      cout << endl;
     }
    return 0;
}