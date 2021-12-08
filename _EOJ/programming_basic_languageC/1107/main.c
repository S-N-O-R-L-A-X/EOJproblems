#include <stdio.h>
#include <stdlib.h>
int F(int x,int y)
{
    int u,cnt;
    u=x^y;
    cnt=0;
    while(u!=0)
    {
        if(u&1)
            cnt++;
        u=u>>1;
    }
    return cnt;
}

int main()
{
    int t,i,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf(" %d %d",&a,&b);
        printf("%d\n",F(a,b));
    }
    return 0;
}
