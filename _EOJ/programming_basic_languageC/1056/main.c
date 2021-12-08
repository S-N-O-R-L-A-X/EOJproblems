#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265f

int main()
{
    int k,i,n;
    double R,r;
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        scanf(" %lf %d",&R,&n);
        //r=round(R/(1+1/sin(PI/n))*1000)/1000;//geometry
        r=R/(1+1/sin(PI/n));//geometry
        printf("Scenario #%d:\n",i);
        printf("%.3lf\n\n",r);
    }
    return 0;
}
