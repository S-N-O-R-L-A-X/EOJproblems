#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,num,s,strip;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %d",&num);
        for(j=1;j<=num;j++)
        {
            scanf(" %d",&strip);
            if(j==1)
                s=strip;
            else
                s=s+strip-1;
        }
        printf("%d\n",s);
    }

    return 0;
}
