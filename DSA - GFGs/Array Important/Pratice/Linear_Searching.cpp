//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int LinearSearch(int a[],int key,int size){
    for (int i = 0; i < size; i++)
    {
        if(a[i]==key){
            return i+1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 4, 6, 9, 10, 12, 14, 16};
    int key=12;

    cout << LinearSearch(arr,key,8);
    return 0;
}