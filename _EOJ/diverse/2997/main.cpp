#include <iostream>
#include <stdio.h>

using namespace std;
/*
long long Tribonacci(int n)
{
    if(n==2)
        return 1+Tribonacci(n-2);
    if(n==1)
        return 1+Tribonacci(n-1);
    if(n==0)
        return 0;
    return Tribonacci(n-3)+Tribonacci(n-2)+Tribonacci(n-1);
}*/

/*
void init()
{
    long long Trib[39]={0,1,1};
    int i; for (i=3;i<N;i++)
    Trib[i] = Trib[i-1]+Trib[i-2]+Trib[i-3];
}

*/

long long Tribonacci(int n)
{
    long long a=0,b=1,c=1,d;
    long long ans;
    if(n==2)
        return 1;
    if(n==1)
        return 1;
    if(n==0)
        return 0;
    for(int i=3;i<=n;i++)
    {
        ans=a+b+c;
        a=b;
        b=c;
        c=ans;
    }
    return ans;
}


int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        printf("case #%d:\n%lld\n",i,Tribonacci(n));

    }
    return 0;
}
