#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,j,n;
    unsigned long long int out;
    scanf("%d",&t);
    for(i=0;i<=t-1;i++)
    {
        scanf(" %d",&n);
        out=1;
        for(j=1;j<=n;j++)
            out=out*2;
        printf("case #%d:\n%llu\n",i,out);
    }
    return 0;
}
