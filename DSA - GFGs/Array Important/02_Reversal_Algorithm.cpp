//#include <iostream>
//#include <iostream>
//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverseArr(int a[],int start,int end)
{
    while(start<end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}
void leftRotate(int a[],int d,int n)
{
    if(d=0)
        return;
        
    d = d % n;
    reverseArr(a, 0, d - 1);
    reverseArr(a, d, n - 1);
    reverseArr(a, 0, n - 1);

}
void printA(int a[],int size)
{
    for (int i = 0; i < size;i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int d = 2;
    leftRotate(a, d, n);
    printA(a, n);

    return 0;
}