#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long fac;
    double e,invfac;
    int n;
    fac=1;
    invfac=1;
    e=1;
    n=1;
    while(invfac-(1E-6)>=0)
    {
        fac=fac*n;
        invfac=1.0/fac;
        e=invfac+e;
        n++;
    }
    printf("%.6lf",e);

    return 0;
}
