#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265

int main()
{
    int w,h;
    double v1,v2;
    while(scanf(" %d %d",&w,&h)&&w!=0&&h!=0)
    {
        v1=PI*((double)w/2)*((double)w/2)*(h-2*PI*w);
        v2=PI*(double)h*h*h/27;
        if(v1-v2<1E-7)
            printf("%.3lf\n",v2);
        else
            printf("%.3lf\n",v1);
    }

    return 0;
}
