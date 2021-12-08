#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t;
    double out,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf(" %lf",&n);
        out=floor(log(n)/log(2))+1;
        printf("Case %d: %.0lf\n",i,out);
    }
    return 0;
}
