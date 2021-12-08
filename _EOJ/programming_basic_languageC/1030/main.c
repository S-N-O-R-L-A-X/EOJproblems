#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a,b,c,d;

    for(i=100;i<=999;i++)
    {
        for(j=100;j<=999;j++)
        {
            a=i/10;
            b=j%100;
            c=i%10;
            d=j/100;
            if(a*j==b*i&&(i%111!=0||j%111!=0)&&c==d)
                printf("%d / %d = %d / %d\n",i,j,a,b);
        }
    }
    return 0;
}
