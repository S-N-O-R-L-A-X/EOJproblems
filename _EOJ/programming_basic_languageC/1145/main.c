#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf(" %d",&n);
        printf("%d\n",n/3);
    }
    return 0;
}
