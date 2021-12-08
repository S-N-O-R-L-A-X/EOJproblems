#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    long long int a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %lld %lld %lld",&a,&b,&c);
        printf("Scenario #%d:\n",i);
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
            printf("yes\n");
        else
            printf("no\n");
        printf("\n");
    }
    return 0;
}
