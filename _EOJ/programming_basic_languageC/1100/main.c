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
    int num,i,a,b,out;
    while(scanf(" %d",&num)&&num!=0)
    {
        scanf(" %d",&a);
        out=a;
        for(i=2;i<=num;i++)
        {
            scanf(" %d",&b);
            out=GDB(out,b);
        }
        printf("%d\n",out);
    }


    return 0;
}
