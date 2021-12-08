#include <stdio.h>
#include <stdlib.h>
long long sum(int n,int num);
long long GDB(long long a,long long b);

int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf(" %d",&n);
        long long x=0;
        for(int j=2;j<=n-1;j++)
            x+=sum(n,j);


        long long a=x/GDB(x,n-2);
        long long b=(n-2)/GDB(x,n-2);
        printf("%lld/%lld\n",a,b);
    }
    return 0;
}

long long sum(int n,int num)
{
    long long s=0;
    while(n)
    {
        s+=n%num;
        n/=num;
    }
    return s;
}

long long  GDB(long long a,long long b)
{
    if(b==0)
        return a;
    else
        return GDB(b,a%b);
}
