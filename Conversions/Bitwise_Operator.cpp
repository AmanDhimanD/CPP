//#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n = 4;
    /* 
    4 = 0100 --> after shift right
        1000 --> binary of 2 
    
    4 = 0100 --> after shift right
        0010 --> binary of 8 

    */
    cout << (n << 1) <<endl; //Right shift ------ (a<<n) - - - >a * 2 ^ n
    cout << (n >> 1) << endl; //Left shift  ------ (a>>n) - - - >a / 2 ^ n
    return 0;
}
