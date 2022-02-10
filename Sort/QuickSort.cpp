#include <iostream>
using namespace std;
void swap(int arr[],int i,int j){
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] =temp;
}
//l is left index and r is right index
int partition(int arr[],int l,int r){
      int pivot = arr[r]; //choose any number of array as pivot element
      int i = l-1; //point i 
      for(int j=l;j<r;j++){
            if(arr[j]<pivot){
                  i++;
                  swap(arr,i,j); //swap the array elements
            }
      }
      swap(arr,i+1,r); //swap the array elements 
      return i+1; // return value to the pi in quick sort   
}
void quickSort(int arr[],int l,int r){
      if(l<r){
            int pi = partition(arr,l,r);
            quickSort(arr,l,pi-1); //recurisive calls
            quickSort(arr,pi+1,r);
      }
}
int main ()
{
  int arr[] = {5,3,2,1};
  int size = sizeof (arr) / sizeof (arr[0]);
  quickSort(arr, 0, size - 1);
  for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }

  return 0;
}
