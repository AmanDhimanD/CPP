//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
inline int max(int a, int b){
    return (a > b) ? a : b;
} 
int main()
{
    int x = 20;
    int y = 21;
    int c = max(x, y); //direct get the result without complier the function, save the memory to complier the c max and then function 
    //direct get ans with return statment
    cout << c << endl;
    return 0;
} 