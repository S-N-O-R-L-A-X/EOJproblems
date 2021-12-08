#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,a,t;
    unsigned long long int out;
    scanf("%d",&t);
    for(i=0;i<=t-1;i++)
    {
        out=1;
        scanf(" %d %d",&a,&n);
        if(n==0)
            printf("case #%d:\n1\n",i);
        else
        {
            for(j=1;j<=n;j++)
                out=out*a;
            printf("case #%d:\n%llu\n",i,out);
        }

    }
    return 0;
}
