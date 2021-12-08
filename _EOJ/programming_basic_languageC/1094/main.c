#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,m,n,j,k;
    scanf("%d",&t);
    for(i=0;i<=t-1;i++)
    {
        scanf(" %d %d",&m,&n);
        getchar();
        char att;int cnt=0;
        for(j=1;j<=m*n;j++)
        {
            scanf("%c",&att);
            if(j%n==0)
                getchar();
            if(att=='.')
                cnt++;
        }
        printf("case #%d:\n",i);
        printf("%d\n",cnt);
    }
    return 0;
}
