#include <stdio.h>
#include <stdlib.h>
int ipow(int x,int y)
{
    int i,out;
    out=1;
    for(i=1;i<=y;i++)
        out=out*x;
    return out;
}

int main()
{
    int t,i,j,c,w,cnt,begin;
    scanf("%d",&t);
    for(i=0;i<=t-1;i++)
    {
        scanf(" %d %d",&c,&w);
        cnt=0;
        begin=ipow(10,c-1)+w;
        for(j=begin;j<ipow(10,c);j=j+10)
        {
            if(j%3==0)
                cnt++;
        }
        printf("case #%d:\n%d\n",i,cnt);
    }
    return 0;
}
