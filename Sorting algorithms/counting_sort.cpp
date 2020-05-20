#include<iostream>

using namespace std;

void countingSort(int arr[],int n)
{
    int temp[1000000];
    int m=-1;
    for(int i=0;i<n;i++){
        temp[arr[i]]++;
        m=max(m,arr[i]);
    }
    for(int i=0;i<=m;i++)
        for(int j=0;j<temp[i];j++)
        cout<<i<<" ";
};

int main()
{
	int *arr, n;
	cin>>n; //number of elements in array
	arr = new int [n+1];
	for(int i=0;i<n;i++)
		cin>>arr[i];

	countingSort(arr,n);



  return 0;
}
