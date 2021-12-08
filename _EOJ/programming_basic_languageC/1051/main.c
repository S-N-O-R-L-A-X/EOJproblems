#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592653589793

int main()
{
    double s,b,a,r;
    while(scanf(" %lf %lf",&a,&r)!=EOF)
    {
        b=a/2;
        if(2*b*b-r*r<=1E-7)
            s=a*a;
        else if(r-b<=1E-7)
            s=PI*r*r;
        else
            s=4*(sqrt(r*r-b*b)*b+0.5*r*r*(PI/2-2*acos(b/r)));
            //s=PI*r*r-(4*acos(b/r)*r*r-2*sin(2*acos(b/r))*r*r);


        printf("%.3lf\n",s);
    }
    return 0;
}
