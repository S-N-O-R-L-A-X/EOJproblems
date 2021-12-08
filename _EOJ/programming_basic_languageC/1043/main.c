#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int n,k,i,j;
    int timeint;
    double time;
    int s,t,r;
    scanf("%d %d",&n,&k);
    for(i=1;i<=k;i++)
    {
        scanf(" %d %d %d",&s,&t,&r);
        if(s*t>=n)
            time=(double)n/s;
        else
        {
            for(j=2;j<=100000;j++)
            {
                if(j*s*t>=n)
                    break;
            }

            time=(double)(n-s*t*(j-1))/s+(j-1)*(t+r);
        }
        timeint=ceil(time);
        printf("%d\n",timeint);
    }

    return 0;
}
