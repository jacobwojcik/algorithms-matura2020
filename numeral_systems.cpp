#include <iostream>

using namespace std;


int decToOtherSystems(int number,int sys)
{
    int result=0,p=1;//p-power
    while(number>0)
    {
        result+=p*(number%sys);
        p*=10;
        number/=sys;
    }
    return result;
}

int main()
{
    int number,system;
    cin>>number; //number in decimnal system
    cin>>system; //2 to 9
    cout<<decToOtherSystems(number,system);
    return 0;
}
