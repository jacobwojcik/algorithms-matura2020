#include <iostream>
#include <iomanip>
using namespace std;

void minAndMax(long long arr[], int n){

   long long minValue,maxValue;

   if(n%2!=0) arr[n] =arr[n-1];

    if(arr[0]>arr[1]){
        maxValue=arr[0]; minValue=arr[1];
    }

    else{
        minValue=arr[0]; maxValue=arr[1];
    }

    for(int i=2;i<n;i+= 2)
      if(arr[i] > arr[i+1]){
          if(arr[i]>maxValue) maxValue=arr[i];
          if(arr[i+1]<minValue) minValue=arr[i+1];
      }
      else{
          if(arr[i+1]>maxValue) maxValue=arr[i+1];
          if(arr[i]<minValue) minValue=arr[i];
      }

    cout<<"Min: "<<minValue<<endl<<"Max: "<<maxValue;
}


int main()

{
    int n;
    long long *arr;

    cin>>n;
    arr = new long long [n];

    for(int i=0;i<n;i++) cin>>arr[i];

    minAndMax(arr,n);

     delete[] arr;

    return 0;
}
