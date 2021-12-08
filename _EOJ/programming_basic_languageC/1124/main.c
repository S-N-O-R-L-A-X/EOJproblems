#include <stdio.h>
#include <stdlib.h>

int pow4(int x)
{
    int out;
    out=x*x*x*x;
    return out;
}
int main()
{
    int i,a,b,c,d;
    for(i=0;i<=9999;i++)
    {
        a=i/1000;
        b=i/100%10;
        c=i%100/10;
        d=i%100%10;
        if(pow4(a)+pow4(b)+pow4(c)+pow4(d)==i)
            printf("%d\n",i);
    }
    return 0;
}
