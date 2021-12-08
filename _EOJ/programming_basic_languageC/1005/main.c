#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i;
    long long d;
    while(scanf("%d %d %d",&a,&b,&c)&&(a!=0||b!=0||c!=0))
    {
        d=1;
        for(i=1;i<=b;i++)
        {
            d=d*a%c;
        }
        printf("%lld\n",d);
    }

    return 0;
}
