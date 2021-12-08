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
    unsigned int x;
    scanf("%u",&x);
    int cnt=0;
    int out1,out2;
    while(x!=0)
    {
        if(x&1)
            cnt++;
        x=x>>1;
    }
    if(cnt==0)
        printf("0,0:32");
    else
    {
        out1=cnt/GDB(cnt,32);
        out2=32/GDB(cnt,32);
        printf("%d,%d:%d",cnt,out1,out2);
    }

    return 0;
}
