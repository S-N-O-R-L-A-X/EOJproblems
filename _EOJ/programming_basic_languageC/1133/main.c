#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,r;
    double out,r0;
    scanf("%d %d",&n,&r);
    r0=(double)r/100;
    out=pow(1+r0,n);
    printf("%.2lf",out);
    return 0;
}
