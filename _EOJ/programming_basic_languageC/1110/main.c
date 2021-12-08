#include <stdio.h>
#include <stdlib.h>
int FN(int x,int y)
{
    int i,min;
    if(x<y)
        min=y;
    else
        min=x;
    for(i=2;i<=min;i++)
    {
        if(x%i==0&&y%i==0)
            return i;
    }
    return 1;
}

int main()
{
    int t,i,n,m,out;
    scanf("%d",&t);
    for(i=0;i<=t-1;i++)
    {
        scanf(" %d %d",&n,&m);
        out=FN(n,m);
        if(out==1)
            printf("case #%d:\nNo\n",i);
        else
            printf("case #%d:\nYes %d\n",i,out);
    }
    return 0;
}
