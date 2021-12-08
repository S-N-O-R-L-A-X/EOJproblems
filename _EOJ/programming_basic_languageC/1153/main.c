#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c;
    double x1,x2;
    scanf("%lf %lf %lf",&a,&b,&c);

    x1=(-b-sqrt(b*b-4*a*c))/(2*a);
    x2=(-b+sqrt(b*b-4*a*c))/(2*a);

    if(fabs(x1-x2)<1E-8)
        printf("%lf",x1);
    else if(x1-x2<0)
        printf("%lf %lf",x1,x2);
    else
        printf("%lf %lf",x2,x1);

    return 0;
}
