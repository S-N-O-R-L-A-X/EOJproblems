#include <stdio.h>
#include <stdlib.h>

int dtob(int x)
{
    int cnt[32]={0};
    int i=0;
    int max;
    int temp=1;
    int flag;
    while(x)
    {
        flag=x%2;
        x=x>>1;
        if(flag!=x%2&&x)
            temp++;
        else
        {
            cnt[i]=temp;
            temp=1;
            i++;
        }
    }
    cnt[i]=temp;
    max=cnt[i];
    for(;i>=0;i--)
    {
        if(cnt[i]>max)
            max=cnt[i];
    }
    return max;
}

int main()
{
    int t,i,x;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf(" %d",&x);
        printf("case #%d:\n%d\n",i,dtob(x));

    }
    return 0;
}
