#include <stdio.h>
#include <stdlib.h>

int GDB(int a,int b)
{
    if(b==0)
        return a;
    else
        return GDB(b,a%b);
}

int main()
{
    int t,i,a,b;
    scanf("%d",&t);
    for(i=0;i<=t-1;i++)
    {
        scanf(" %d %d",&a,&b);
        printf("case #%d:\n%d\n",i,GDB(a,b));
    }
    return 0;
}
