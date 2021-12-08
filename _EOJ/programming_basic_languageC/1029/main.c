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
    int a,b,out;
    while(scanf(" %d %d",&a,&b)!=EOF)
    {
        out=a*b/GDB(a,b);
        printf("%d\n",out);
    }
    return 0;
}
