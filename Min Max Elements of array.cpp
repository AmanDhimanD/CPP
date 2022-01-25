
#include <iostream>

using namespace std;

int main()
{
      int arr[5]={-1,2,4,5,12};
      int max=0,min=0;
      for(int i=0;i<5;i++){
            if(arr[i]>max){
                  max=arr[i];
            }
            if(arr[i]<min){
                  min=arr[i];
            }
      }
    cout<<"Max:- "<<max<<endl;
    cout<<"Min:- "<<min<<endl;
    return 0;
}
