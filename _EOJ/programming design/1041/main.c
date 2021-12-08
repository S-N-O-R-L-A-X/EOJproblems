#include <stdio.h>
#include <stdlib.h>
int sdigit(int x)
{
    int out;
    out=0;
    while(x>0)
    {
        out=out+x%10;
        x=x/10;
    }
    return out;
}

int main()
{
    int i,j,k;
    for(i=1;i<=1000000;i++)
    {
        for(j=i-100;j<=i;j++)
        {
            if(i==j+sdigit(j))
                break;
            if(j==i)
                printf("%d\n",i);
        }
    }
    return 0;
}
