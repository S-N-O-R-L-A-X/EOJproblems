#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,date;
    int June[30]={0};
    scanf(" %d",&n);
    for(i=1;i<=n;i++)
    {
        while(scanf(" %d",&date)&&date!=-1)
        {
            June[date-1]=1;
        }
    }
    for(i=0;i<=29;i++)
    {
        if(June[i]!=1)
        {
            printf("no");
            break;
        }
        if(i==29)
            printf("yes");
    }
    return 0;
}
