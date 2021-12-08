#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int s,c,d;
    long a,b;
    int n,i,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        s=0;
        scanf(" %ld %ld",&a,&b);
        c=a+b;
        d=b-a+1;
        s=c*d/2;
        printf("Scenario #%d:\n%lld\n\n",j,s);
    }

    return 0;
}
