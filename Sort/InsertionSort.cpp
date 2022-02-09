#include <iostream>
using namespace std;

 void insertionSort(int arr[],int n){
      for(int i=0;i<n;i++){
            int temp = arr[i];
            int j = i;
            while(j>0 && temp < arr[j-1]){
                  arr[j] = arr[j-1];
                  j--;
            }
            arr[j] = temp;
      }
 }
int main()
{
    int arr[]={5,6,3,21,1};
    insertionSort(arr,5);
    for(int i=0;i<5;i++){
          cout<<arr[i]<<" ";
    }
   
    return 0;
}
