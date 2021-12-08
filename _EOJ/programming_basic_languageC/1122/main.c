#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b;
    long long int out;
    scanf("%d %d",&a,&b);
    out=1;
    for(i=1;i<=b;i++)
        out=out*a;

    printf("%lld",out);
    return 0;
}
