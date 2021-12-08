#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,row,col,i,j,k;
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %d %d",&row,&col);
        int a[row][col];int b[row][col];
        for(j=0;j<=row-1;j++)
        {
            for(k=0;k<=col-1;k++)
                scanf(" %d",&a[j][k]);
        }
        for(j=0;j<=row-1;j++)
        {
            for(k=0;k<=col-1;k++)
            {
                scanf(" %d",&b[j][k]);
                if(k==col-1)
                    printf("%d\n",a[j][k]+b[j][k]);
                else
                    printf("%d ",a[j][k]+b[j][k]);
            }
        }
    }
    return 0;
}
