#include<iostream>

using namespace std;

void selectionSort(int arr[],int n)
{
  for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        {
           if(arr[j]<arr[i]) swap(arr[i],arr[j]);
        }
};

int main()
{
	int *arr, n;
	cin>>n; //number of elements in array
	arr = new int [n+1];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	selectionSort(arr,n);

	for(int i=0;i<n;i++)
          cout<<arr[i]<<" ";

   delete[] arr;

  return 0;
}
