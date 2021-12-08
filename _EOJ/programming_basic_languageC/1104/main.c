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
    int a,b,c,d,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %d %d",&a,&b);
        c=GDB(a,b);
        d=a*b/c;
        printf("%d %d %d\n",i,d,c);
    }
    return 0;
}
