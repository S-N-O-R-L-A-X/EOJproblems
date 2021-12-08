#include <stdio.h>
#include <stdlib.h>
int GDB(int x,int y)
{
    if(y==0)
        return x;
    else
        return GDB(y,x%y);
}

int main()
{
    int a,b,c,temp,out;
    scanf("%d %d %d",&a,&b,&c);
    temp=GDB(a,b);
    out=GDB(temp,c);
    printf("%d\n",out);
    return 0;
}
