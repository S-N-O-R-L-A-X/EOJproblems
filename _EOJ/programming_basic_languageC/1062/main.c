#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,k,c,i,j,l;
    c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d\n",&m,&k);
        int b[m];
        for(j=0;j<=m-1;j++)
        {
            scanf("%d",&b[j]);
        }
        for(l=0;l<=k-1;l++)
        {
            c=c+b[l];
        }
        printf("%d\n",c);
        c=0;
    }
    return 0;
}
