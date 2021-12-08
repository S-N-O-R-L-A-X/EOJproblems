#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,j;
    int b;
    scanf("%d",&m);
    int a[m];
    for(i=0;i<=m-1;i++)
        scanf(" %d",&a[i]);
    scanf(" %d",&n);

    for(i=0;i<=n-1;i++)
    {
        scanf(" %d",&b);
        for(j=0;j<=m-1;j++)
        {
            if(b==a[j])
            {
                printf("yes!\n");
                break;
            }
            if(j==m-1)
                printf("no!\n");
        }
    }


    return 0;
}
