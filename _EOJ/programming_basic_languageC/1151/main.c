#include <stdio.h>
#include <stdlib.h>

int spow(int y)
{
    int i,out;
    out=1;
    for(i=1;i<=y;i++)
    {
        out*=10;
    }
    return out;
}

int main()
{
    int t,i,j,n,b;
    unsigned long long int a,mod,judge;
    scanf("%d",&t);
    for(i=0;i<=t-1;i++)
    {
        scanf(" %llu %d %d",&a,&b,&n);
        mod=1;
        for(j=1;j<=b;j++)
        {
            mod=mod*a%spow(n);
        }
        judge=mod;
        j=n-1;
        printf("case #%d:\n",i);
        while(j!=0)
        {
           if(judge/spow(j)==0)
           {
               printf("0");
               j--;
           }
           else
               break;
        }
        printf("%llu\n",mod);
    }
    return 0;
}
