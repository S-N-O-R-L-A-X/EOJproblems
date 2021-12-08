#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265

int main()
{
    int n,i,a,b,c,r,h;
    double v1,v2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %d %d %d %d %d",&a,&b,&c,&r,&h);
        v1=a*b*c;
        v2=PI*r*r*h;
        if(v1<=v2)
            printf("%.2lf\n",v1);
        else
            printf("%.2lf\n",v2);
    }
    return 0;
}
