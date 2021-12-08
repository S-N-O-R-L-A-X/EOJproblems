#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b)
{
    long long *c=(long long *)a;
    long long *d=(long long *)b;
    long long e=*c;
    long long f=*d;
    int n1;
    if(e<0)
        e=-e;
    if(f<0)
        f=-f;
    while(e>=10)
        e/=10;
    while(f>=10)
        f/=10;
    n1=f-e;//in a descending order
    if(n1!=0)
        return n1;

    return (*c)>(*d);//in an ascending order
}

int main()
{
    int t,i,j,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf(" %d",&n);
        long long int a[n];
        int k=0;
        for(j=0;j<n;j++)
        {
            scanf(" %lld",&a[k]);
            k++;
        }
        qsort(a,n,sizeof(long long),cmp);
        printf("case #%d:\n",i);
        for(j=0;j<n;j++)
            printf("%lld ",a[j]);
        printf("\n");

    }
    return 0;
}
