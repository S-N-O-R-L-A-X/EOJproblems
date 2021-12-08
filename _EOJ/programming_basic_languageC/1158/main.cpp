#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int prime[100000];
    int cnt=0;
    for(int i=2;i<1299709;i++)
    {
        bool flag=true;//is a prime
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
            prime[cnt++]=i;
    }
    prime[99999]=1299709;
    int n;
    while(true)
    {
        cin>>n;
        if(n==0)
            break;
        else if(n==1||n==2)
            cout<<'0'<<endl;
        else
        {
            for(int i=1;i<100000;i++)
            {
                if(n==prime[i])
                {
                    cout<<'0'<<endl;
                    break;
                }
                else if(n<prime[i])
                {
                    cout<<prime[i]-prime[i-1]<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
