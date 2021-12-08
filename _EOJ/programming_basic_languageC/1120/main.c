#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,j,land,n,cnt;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        cnt=0;
        scanf(" %d",&n);
        for(j=1;j<=n;j++)
        {
            scanf(" %d",&land);
            if(land<=10)
                cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
