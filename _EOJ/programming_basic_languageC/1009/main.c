#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b;
    while(scanf("%lf %lf",&a,&b)!=EOF)
        printf("%.3lf\n",sqrt(a*a+b*b));

    return 0;
}
