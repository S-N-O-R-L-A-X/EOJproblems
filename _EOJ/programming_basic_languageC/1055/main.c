#include <stdio.h>
#include <stdlib.h>

/*
long long int POWER2(int power)
{
    int i;
    long long int out;
    for(i=1;i<=power;i++)
        out*=i;
    return out;
}*/


int main()//Fibonacci
{
    int n,i,bit,j;
    long long int a,b,cnt;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        cnt=1;a=1;b=1;
        scanf(" %d",&bit);
        for(j=1;j<=bit;j++)//the first onr is 1
        {
            a=b;
            b=cnt;
            cnt=a+b;
        }
        printf("Scenario #%d:\n",i);
        printf("%lld\n\n",cnt);
    }
    return 0;
}
