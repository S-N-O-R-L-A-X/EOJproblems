#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,demand,supply;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&supply,&demand);
        if(supply>=demand)
            printf("MMM BRAINS\n");
        else
            printf("NO BRAINS\n");
    }
    return 0;
}
