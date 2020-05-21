#include <iostream>
#include <algorithm>

using namespace std;

int arr[200][20000]={0};

int main()
{
   int n,denomination;
   for(int i=1;i<20000;i++) arr[0][i]=1000000;

   cin>>n;

   for(int w=1;w<=n;w++)
   {
       cin>>denomination; //denominations
       for(int k=0;k<denomination;k++) arr[w][k]=arr[w-1][k];
       for(int k=denomination;k<20000;k++) arr[w][k]=min(arr[w-1][k],arr[w][k-denomination]+1);
   }

   int amount;
   cin>>amount;

   if(arr[n][amount]==1000000)  cout<<"It can't be done";

   else cout<<arr[n][amount];
}
