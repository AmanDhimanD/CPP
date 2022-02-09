#include <iostream>
using namespace std;
void selectionSort(int arr[],int n){
      for(int i=0;i<n-1;i++){
            int imin=i;
            for(int j=i+1;j<n;j++){
                  if(arr[j]<arr[imin]){
                        imin=j;
                  }
            }
            int temp = arr[i];
            arr[i] = arr[imin];
            arr[imin] = temp;
      }
}
int main()
{
    int arr[]={5,6,3,21,1};
    selectionSort(arr,5);
    for(int i=0;i<5;i++){
          cout<<arr[i]<<" ";
    }
   
    return 0;
}
