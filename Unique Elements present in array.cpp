//Find the existing number of elements in the array 
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3,2,1,0,2,3,4,5,4,5,6,3,3,2,1,0,10,15,16,17},j=0,count=0;
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size);
    for(int i=0;i<size;i++){
          cout<<arr[i]<<" ";
    }
    for(int i=0;i<size;i++){
         if(arr[i]!=arr[i+1]){
               count++;
         }
    }
    cout<<endl<<count;
    return 0;
}
