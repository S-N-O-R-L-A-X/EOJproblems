#include <stdio.h>
#include <stdlib.h>

long long int Permutation(int n,int m)
{
    long long int out=1;
    int i;
    for(i=n-m+1;i<=n;i++)
        out*=i;
    return out;
}

int main()
{
    int n,r;
    long long int out;
    while(scanf(" %d %d",&n,&r)!=EOF)
    {
        if(r)
        {
            out=Permutation(n,r)/r;
            printf("%lld\n",out);
        }

        else
            printf("1\n");
    }
    return 0;
}
