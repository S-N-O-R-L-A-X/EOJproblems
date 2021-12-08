#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int s,temp;
    int a,i,j,k,n;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=0;
        scanf(" %d",&n);
        for(j=1;j<=n;j++)
        {
            temp=1;
            for(k=1;k<=j;k=k+2)
                temp=temp*k;
            s=s+temp;
        }
        printf("%llu\n",s);
    }
    return 0;
}
