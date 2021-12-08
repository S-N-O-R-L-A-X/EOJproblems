#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a,b,h;
    double candle;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %d %d %d",&a,&b,&h);
        candle=(double)b/a*h;
        printf("%.2lf\n",candle);
    }
    return 0;
}
