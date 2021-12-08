#include <iostream>

using namespace std;

bool isPrime(int x)
{
    for(int prime=3;prime<x/2;prime+=2)
    {
        if(x%prime==0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    while(cin>>n)
    {
        int mid=n/2,a,b;
        if(mid%2)//odd
        {
            a=mid;
            b=mid;
        }
        else//even
        {
            a=n/2-1;
            b=n/2+1;
        }
        while(true)
        {
            if(isPrime(a)&&isPrime(b))
                break;
            a-=2;
            b+=2;
        }
        cout<<a<<' '<<b<<endl;
    }
    return 0;
}
