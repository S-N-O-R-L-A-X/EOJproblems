#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j,k,round,sum;
    scanf(" %d ",&m);
    int a[100][100],b[100][100];
    for(round=1;round<=m;round++)
    {
        scanf(" %d",&n);
        sum=0;
        for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=n-1;j++)
                scanf(" %d",&a[i][j]);
        }
        for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=n-1;j++)
                scanf(" %d",&b[i][j]);
        }
        for(i=0;i<=n-1;i++)//control rows of a
        {
            for(j=0;j<=n-1;j++)//control columns of b
            {
                for(k=0;k<=n-1;k++)//do the matrix multiply
                {
                    sum=sum+a[i][k]*b[k][j];
                }
                if(j==n-1)
                    printf("%d\n",sum);
                else
                    printf("%d ",sum);
                sum=0;
            }

        }
    }

    return 0;
}
