#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int i,n,j,k,temp;
    while(scanf(" %d",&n)!=EOF)
    {
        int a[n];
        for(i=0;i<=n-1;i++)
            scanf(" %d",&a[i]);
        for(j=0;j<=n-2;j++)
        {
            for(k=0;k<=n-2-j;k++)
            {
                if(abs(a[k])>abs(a[k+1]))
                {
                    temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                }
            }
        }
        for(i=0;i<=n-2;i++)
            printf("%d ",a[i]);
        printf("%d\n",a[n-1]);

    }
    return 0;
}
