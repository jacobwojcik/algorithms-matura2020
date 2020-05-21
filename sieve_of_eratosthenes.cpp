#include <iostream>

using namespace std;

//Sieve of Eratosthenes
void sieve(int arr[]){
    int n=10000000;
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i*i<=n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*i;j<n;j+=i)
            {
                arr[j]=1;
            }
        }
    }
}

int arr[10000009];
int main()
{
    ios_base::sync_with_stdio(0);

    sieve(arr);

    int a;
    while(cin>>a){
        if(arr[a]==0) cout<<"It's prime number"<<endl;
        else cout<<"It's not prime number"<<endl;
    }


    return 0;
}
