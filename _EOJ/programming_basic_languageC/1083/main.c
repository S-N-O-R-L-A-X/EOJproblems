#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    double a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %lf",&a);
        b=a/6;//v=(a-b)*(a-b)*b;if(v'=0)-->a=6*b
        //b=0.00000000005+b;
        printf("%.10lf\n",b);
    }
    return 0;
}
