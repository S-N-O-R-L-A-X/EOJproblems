#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,b,h,w;
    int i,j,cnt;
    int min;
    while(scanf(" %d %d %d %d",&n,&b,&h,&w)!=EOF)
    {
        int cost[300];
        int price[h];
        int week[w];
        min=999999999;
        cnt=0;

        for(i=0;i<=h-1;i++)
        {
            scanf(" %d",&price[i]);
            for(j=0;j<=w-1;j++)
            {
                scanf(" %d",&week[j]);
                if(week[j]>=n&&n*price[i]<=b)
                {
                    cost[cnt]=n*price[i];
                    cnt++;
                }
            }
        }
        for(i=0;i<=cnt-1;i++)
        {
            if(cost[i]<min)
                min=cost[i];
        }
        if(cnt==0)
            printf("stay home\n");
        else
            printf("%d\n",min);

    }
    return 0;
}
