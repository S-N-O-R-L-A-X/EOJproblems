#include <stdio.h>
#include <stdlib.h>

long long int GDB(long long int a,long long int b)
{
    if(b==0)
        return a;
    else
        return GDB(b,a%b);
}

long long int LCM(long long int x,long long int y)
{
    return x*y/GDB(x,y);
}

int main()
{
    long long int t,i,a,b;
    scanf("%lld",&t);
    for(i=0;i<=t-1;i++)
    {
        scanf(" %lld %lld",&a,&b);
        printf("case #%lld:\n%lld\n",i,LCM(a,b));
    }
    return 0;
}
