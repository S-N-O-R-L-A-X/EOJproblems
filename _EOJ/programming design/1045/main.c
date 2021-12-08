#include <stdio.h>
#include <stdlib.h>

int cnt1(long long x)
{
    int cnt=0;
    long long  y=1;
    for(int i=0;i<64;i++)
    {
        if(x&y)
            cnt++;
        y=y<<1;
    }
    /*while(x)
    {
        if(x&1)
            cnt++;
        x=x>>1;
    }*/
    return cnt;
}

int cmp(const void *a,const void *b)
{
    long long *c=(long long *)a;
    long long *d=(long long *)b;
    if(cnt1(*c)!=cnt1(*d))
        return cnt1(*d)-cnt1(*c);
    return *c>*d?1:-1;
}

int main()
{
    int t,n,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf(" %d",&n);
        long long a[n];
        for(j=0;j<n;j++)
            scanf(" %lld",&a[j]);
        qsort(a,n,sizeof(long long),cmp);
        printf("case #%d:\n",i);
        for(j=0;j<n;j++)
            printf("%lld ",a[j]);
        printf("\n");
    }
    return 0;
}

