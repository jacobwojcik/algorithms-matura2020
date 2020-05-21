#include<iostream>

using namespace std;

void insertionSort(int arr[],int n)
{
   int temp, j;
     for(int i=1; i<n; i++)
     {
         temp=arr[i];
         j=i-1;

         while(j>=0 && arr[j]>temp)
         {
            arr[j+1]=arr[j];
            j--;
         }
         arr[j+1]=temp;
     }
}

int main()
{
	int *arr, n;
	cin>>n; //number of elements in array
	arr = new int [n+1];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	insertionSort(arr,n);

	for(int i=0;i<n;i++)
          cout<<arr[i]<<" ";
   
    delete[] arr;

  return 0;
}
