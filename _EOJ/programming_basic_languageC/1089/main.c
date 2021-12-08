#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,j,k,n,sum,judge;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf(" %d",&n);
        judge=0;
        int vector[n][3];
        for(j=0;j<=n-1;j++)//control vectors
        {
            for(k=0;k<=2;k++)//control one of the vectors
                scanf(" %d",&vector[j][k]);
        }
        for(j=0;j<=2;j++)
        {
            sum=0;
            for(k=0;k<=n-1;k++)
                sum=sum+vector[k][j];
            if(sum!=0)
            {
                judge=1;
                break;
            }
        }
        if(judge==1)
            printf("NO\n");
        else
            printf("YES\n");

    }
    return 0;
}
