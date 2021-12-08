#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t1,p;
    double t,t2,v1,v2;
    scanf("%d %d",&t1,&p);
    if(p<20)
    {
        t=(double)p*t1/(double)(60-p);
    }
    else
    {
        v1=(double)(100-p)/t1;
        v2=v1/2;
        t=(p-20)/v1+20/v2;
    }
    printf("%.5lf",t);

    return 0;
}
