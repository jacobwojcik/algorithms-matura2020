#include<iostream>

using namespace std;

int GCD(int a, int b)
{
    int temp;
	while(b!=0)
    {
		temp=b;
		b=a%b;
		a=temp;
	}
    return a;
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<(a*b)/GCD(a,b); //LCM =a*b/GCD(a*b)
    return 0;
}
