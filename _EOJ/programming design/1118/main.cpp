#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

void solve()
{
    int x;
    cin>>x;
    int cnt=0;
    /*
        a1n+n(n-1)d/2=s a1>0&&a1 is an int now here is one variable
        so 2s>n(n-1)=>n<(1+sqrt(1+8s))/2
    */
    for(int i=2;i<(1+sqrt(1+8*x))/2;i++)
    {
        if((x-i*(i-1)/2)%i==0)
            cnt++;
    }
    /*for(int i=1;i<=x/2;i++)//control start
    {
        for(int j=1;j<=x/2+1;j++)//control end
        {
            int sum=(i+j)*(j-i+1)/2;
            if(sum==x)
                cnt++;
        }
    }*/
    printf("%d\n",cnt);
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        printf("case #%d:\n",i);
        solve();
    }
    return 0;
}
