#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int l,v0,a;
    double t;
    scanf("%d %d %d",&l,&v0,&a);
    int i=1;
    while(i<=l)
    {
        t=(sqrt((double)v0*v0+2*(double)a*i)-v0)/a;
        printf("%.8lf\n",t);
        i++;
    }
    return 0;
}
