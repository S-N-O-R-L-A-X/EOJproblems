#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    if(m==n&&n==1)
        printf("1\n");
    else
    {
        for(i=1;i<=m;i++)//control rows
        {
            printf("%d ",i);
            for(j=i+m;j<=m*n;j=j+m)//control columns
            {
                if(j+m>m*n)
                {
                    printf("%d\n",j);
                }
                else
                    printf("%d ",j);
            }
        }
    }


    return 0;
}
