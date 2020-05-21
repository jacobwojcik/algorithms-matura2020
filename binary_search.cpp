#include <iostream>

using namespace std;

int binSearch(int arr[], int left, int right, int a){

    while(left<=right){
        int pivot=left+(right-1)/2;

        if(arr[pivot]==a) return pivot+1;

        else if (arr[pivot]<a) left=pivot+1;

        else right=pivot-1;
    }

    return -1;
}


int main()
{
    int n,a, *arr;
    cin>>n;
    arr = new int [n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i]; //array in ascending order
    }

    cin>>a;

    int result=binSearch(arr, 0, n-1,a);
    if(result==-1) cout<<"Given number is not in the array";
    else cout<<result; //position of the number

    delete[] arr;

    return 0;
}
