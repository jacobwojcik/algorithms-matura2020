#include<iostream>

using namespace std;

void quickSort(int arr[],int left, int right)
{
    if(right<=left) return;

    int i=left-1, j=right +1, pivot=arr[(left+right)/2];

    while(true){
        while(pivot>arr[++i]);
            while(pivot<arr[--j]);
                if(i<=j) swap(arr[i],arr[j]);

                else break;
    }
    if(j>left)
	quickSort(arr,left,j);
	if(i<right)
	quickSort(arr,i,right);
}

int main()
{
	int *arr, n;
	cin>>n; //number of elements in array
	arr = new int [n];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	quickSort(arr,0,n-1);

    for(int i=0;i<n;i++)
          cout<<arr[i]<<" ";

     delete[] arr;

  return 0;
}
