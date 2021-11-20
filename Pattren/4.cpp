//   1   2   3   4   5 
//   6   7   8   9  10 
//  11  12  13  14  15
//  16  17  18  19  20
//  21  22  23  24  25 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=1;
    cin>>n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
        {
            cout <<setw(3)<< k++ << " ";
        }
      cout << endl;
    }
    return 0;
}