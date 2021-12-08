#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i;
    scanf(" %d %d",&m,&n);
    int coin[n];
    for(i=0;i<=n-1;i++)
    {
        coin[i]=m/n+m%n;
        m=m-coin[i];
        printf("%d ",coin[i]);
    }
    printf("\n%d",m);
    return 0;
}
